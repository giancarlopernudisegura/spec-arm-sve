#include "config.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>

#include <vector>
#include <functional>
#include <boost/tuple/tuple.hpp>

#include "FastState.h"
#include "Playout.h"
#include "UCTNode.h"
#include "UCTSearch.h"
#include "Utils.h"
#include "Matcher.h"

using namespace Utils;

UCTNode::UCTNode(int color, int vertex) 
 : m_firstchild(NULL), m_move(vertex),
 m_blackwins(0), m_visits(0), m_valid(true), m_extend(UCTSearch::MATURE_TRESHOLD) {
    
    m_ravevisits  = 20;  
    m_ravestmwins = 10;       
}

UCTNode::~UCTNode() {    
    SMP::Lock lock(get_mutex());    
    UCTNode * next = m_firstchild;

    while (next != NULL) {
        UCTNode * tmp = next->m_nextsibling;           
        delete next;                    
        next = tmp;
    }	 
}

bool UCTNode::first_visit() const {        
    return m_visits == 0;
}

void UCTNode::link_child(UCTNode * newchild) {
    newchild->m_nextsibling = m_firstchild;
    m_firstchild = newchild;            
}

SMP::Mutex & UCTNode::get_mutex() {
    return m_nodemutex;
}

int UCTNode::create_children(FastState & state, bool scorepass) {   
    // acquire the lock
    SMP::Lock lock(get_mutex());    
    // check whether somebody beat us to it
    if (has_children()) {        
        return 0;
    }                      
    
    FastBoard & board = state.board;      
    
    std::vector<int> nodelist;        

    if (state.get_passes() < 2) {             
        for (int i = 0; i < board.m_empty_cnt; i++) {  
            int vertex = board.m_empty[i];  
            
            assert(board.get_square(vertex) == FastBoard::EMPTY);             
            
            // add and score a node        
            if (vertex != state.komove && board.no_eye_fill(vertex)) {
                if (!board.is_suicide(vertex, board.m_tomove)) {                                          
                    nodelist.push_back(vertex);                    
                } 
            }                                           
        }                  
        nodelist.push_back(+FastBoard::PASS);   
    }            
    
    std::vector<int>::const_iterator it; 
    int childrenadded = 0;
        
    for (it = nodelist.begin(); it != nodelist.end(); ++it) {                            
        UCTNode * vtx = new UCTNode(state.get_to_move(), *it);
        if (*it != FastBoard::PASS) {
            // atari giving
            // was == 2, == 1
            if (state.board.minimum_elib_count(board.m_tomove, *it) <= 2) {
                vtx->set_extend(5);
            }			
            if (state.board.minimum_elib_count(!board.m_tomove, *it) == 1) {
                vtx->set_extend(5);
            }			
        }
        link_child(vtx);
        childrenadded++;                               
    }          

    return childrenadded;
}

void UCTNode::kill_superkos(KoState & state) {        
    UCTNode * child = m_firstchild;
    
    while (child != NULL) {
        int move = child->get_move();                
        
        if (move != FastBoard::PASS) {
            KoState mystate = state;
            mystate.play_move(move);
            
            if (mystate.superko()) {                                    
                UCTNode * tmp = child->m_nextsibling;
                delete_child(child);                
                child = tmp;
                continue;                               
            }    
        }                   
        child = child->m_nextsibling;
    }                 
}

int UCTNode::get_move() const {
    return m_move;
}

void UCTNode::set_move(int move) {
    m_move = move;
}

void UCTNode::set_extend(int runs) {
	m_extend = runs;
}

void UCTNode::update(Playout & gameresult, int color) {   
    SMP::Lock lock(get_mutex());   
    m_visits++;    
    m_ravevisits++;
    
    // prefer winning with more territory    
    float score = gameresult.get_score();
           
    if (score > 0.0f) {
        m_blackwins++;
    }        
    
    if (color == FastBoard::WHITE) {
        if (score < 0.0f) {
            m_ravestmwins++;
        }
    } else if (color == FastBoard::BLACK) {
        if (score > 0.0f) {
            m_ravestmwins++;
        }
    }    
}

bool UCTNode::has_children() const {    
    return m_firstchild != NULL;
}

int UCTNode::get_blackwins() const {
    return m_blackwins;
}

void UCTNode::set_visits(int visits) {    
    SMP::Lock lock(get_mutex());      
    m_visits = visits;
}

void UCTNode::set_blackwins(int wins) {
    SMP::Lock lock(get_mutex());   
    m_blackwins = wins;       
}

int UCTNode::get_winrate(int tomove) const {    
    assert(!first_visit());

    int rate = (1000 * get_blackwins()) / get_visits();
    
    if (tomove == FastBoard::WHITE) {
        rate = 1000 - rate;
    }
    
    return rate;
}

int UCTNode::get_raverate() const {
    int rate = (1000 * m_ravestmwins) / m_ravevisits;        
    
    return rate;
}

int UCTNode::get_visits() const {        
    return m_visits;
}

int UCTNode::get_ravevisits() const {
    return m_ravevisits;
}

int UCTNode::do_extend() const {
	return m_extend;
}

UCTNode* UCTNode::uct_select_child(int color) {                                   
    UCTNode * best = NULL;    
    int best_value = -10000;
   
    UCTNode * child = m_firstchild;
    // make sure we are at a valid successor        
    while (child != NULL && !child->valid()) {
        child = child->m_nextsibling;
    }    
              
    while (child != NULL) {
        int value;
        int uctvalue;                                                                            

        if (child->get_ravevisits() > 0) {        
            if (!child->first_visit()) {                
                int winrate   = child->get_winrate(color);
                uctvalue = winrate;           
            } else {
                uctvalue = 1100;                                                                                 
            }                                                    
            
            // RAVE part                                                                                
            int ravewinrate = child->get_raverate();            
            int ravevalue = ravewinrate;             
	    int beta = 200 + 1000 / (2 + (child->get_visits() / 200));	  
               
            value = (beta * ravevalue + (1000 - beta) * uctvalue) / 1000;
            
            assert(value > -10000);
        } else {                  
            value = 1100;  
        }                
                        
        if (value > best_value) {
            best_value = value;
            best = child;
        }                        
        
        child = child->m_nextsibling;     
        // make sure we are at a valid successor        
        while (child != NULL && !child->valid()) {
            child = child->m_nextsibling;
        }
    }           
    
    assert(best != NULL);         
    
    return best;
}

class NodeComp : public std::binary_function<UCTNode::sortnode_t, UCTNode::sortnode_t, bool> {   
private:
    const int m_maxvisits;
public:   
    NodeComp(const int maxvisits) : m_maxvisits(maxvisits) {}
   
    bool operator()(const UCTNode::sortnode_t a, const UCTNode::sortnode_t b) {                      
        // edge cases, one playout or none
        if (!a.get<1>() && b.get<1>()) {
            return false;
        }  
        
        if (!b.get<1>() && a.get<1>()) {
            return true;
        }
        
        if (!a.get<1>() && !b.get<1>()) {                        
            return false;            
        }            
        
        // first check: are playouts comparable and sufficient?
        // then winrate counts        

        if (a.get<1>() > UCTSearch::MATURE_TRESHOLD 
            && b.get<1>() > UCTSearch::MATURE_TRESHOLD
            && a.get<1>() * 2 > m_maxvisits
            && b.get<1>() * 2 > m_maxvisits) {
        
            if (a.get<0>() == b.get<0>()) {
                if (a.get<1> ()> b.get<1>()) {
                    return true;
                } else {
                    return false;
                }
            } else if (a.get<0>() > b.get<0>()) {
                return true;
            } else {
                return false;
            } 
        } else {        
            // playout amount differs greatly, prefer playouts                       
            if (a.get<1>() > b.get<1>()) {
                return true;
            } else {
                return false;
            }                     
        }
    }
};

/*
    sort children by converting linked list to vector,
    sorting the vector, and reconstructing to linked list again
*/        
void UCTNode::sort_children(int color) {
    SMP::Lock lock(get_mutex());             
    std::vector<sortnode_t> tmp;
    
    UCTNode * child = m_firstchild;    
    int maxvisits = 0;
    
    while (child != NULL) {        
        int visits = child->get_visits();
	if (visits) {
		tmp.push_back(boost::make_tuple(child->get_winrate(color), visits, child));
	} else {
		tmp.push_back(boost::make_tuple(0, 0, child));
	}
    
        maxvisits = std::max(maxvisits, visits);                
                        
        child = child->m_nextsibling;       
    }        
    
    // reverse sort, because list reconstruction is backwards
    std::stable_sort(tmp.begin(), tmp.end(), NodeComp(maxvisits));        
    std::reverse(tmp.begin(), tmp.end());
    
    m_firstchild = NULL;
    
    std::vector<sortnode_t>::iterator it;
    
    for (it = tmp.begin(); it != tmp.end(); ++it) {
        link_child(it->get<2>());   
    }       
}

UCTNode* UCTNode::get_first_child() {
    return m_firstchild;
}

UCTNode* UCTNode::get_sibling() {
    return m_nextsibling;
}

UCTNode* UCTNode::get_pass_child() {
    UCTNode * child = m_firstchild;    
    
    while (child != NULL) {        
        if (child->m_move == FastBoard::PASS) {
            return child;
        }
                        
        child = child->m_nextsibling;       
    }              
    
    return NULL;  
}

UCTNode* UCTNode::get_nopass_child() {
    UCTNode * child = m_firstchild;    
    
    while (child != NULL) {        
        if (child->m_move != FastBoard::PASS) {
            return child;
        }
                        
        child = child->m_nextsibling;       
    }              
    
    return NULL;  
}

void UCTNode::invalidate() {
    SMP::Lock lock(get_mutex());
    m_valid = false;
}

bool UCTNode::valid() {
    return m_valid;
}

// unsafe in SMP, we don't know if people hold pointers to the 
// child which they might dereference
void UCTNode::delete_child(UCTNode * del_child) {  
    SMP::Lock lock(get_mutex());     
    assert(del_child != NULL);
    
    if (del_child == m_firstchild) {           
        m_firstchild = m_firstchild->m_nextsibling; 
        delete del_child;       
        return;
    } else {
        UCTNode * child = m_firstchild;    
        UCTNode * prev  = NULL;
    
        do {
            prev  = child;            
            child = child->m_nextsibling;
            
            if (child == del_child) {                
                prev->m_nextsibling = child->m_nextsibling;
                delete del_child;
                return;
            }                                    
        } while (child != NULL);     
    }         

    assert(0 && "Child to delete not found");           
}

// update siblings with matching RAVE info
void UCTNode::updateRAVE(Playout & playout, int color) {      
    float score = playout.get_score();            
    
    // siblings
    UCTNode * child = m_firstchild;    
    
    while (child != NULL) {                
        int move = child->get_move();                
        
        if (color == FastBoard::BLACK) {
            bool bpass = playout.passthrough(FastBoard::BLACK, move);        
            
            if (bpass) { 
                SMP::Lock lock(child->get_mutex());    
                child->m_ravevisits++;
                        
                if (score > 0.0f) {
                    child->m_ravestmwins++;
                }                 
            }        
        } else {
            bool wpass = playout.passthrough(FastBoard::WHITE, move);        
            
            if (wpass) { 
                SMP::Lock lock(child->get_mutex());    
                child->m_ravevisits++;
                        
                if (score < 0.0f) {
                    child->m_ravestmwins++;
                }                 
            }
        }
                        
        child = child->m_nextsibling;       
    }      
}
