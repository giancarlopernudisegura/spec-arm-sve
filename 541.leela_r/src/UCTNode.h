#ifndef UCTNODE_H_INCLUDED
#define UCTNODE_H_INCLUDED

#include "config.h"

#include <boost/tuple/tuple.hpp>

#include "SMP.h"
#include "GameState.h"
#include "Playout.h"

class UCTNode {
public:        
    typedef boost::tuple<int, int, UCTNode*> sortnode_t;

    UCTNode(int color, int vertex);
    ~UCTNode();    
    bool first_visit() const;
    bool has_children() const;    
    int get_winrate(int tomove) const;
    int get_raverate() const;
    int get_blackwins() const;
    int create_children(FastState & state, bool scorepass = false);
    void kill_superkos(KoState & state);
    void delete_child(UCTNode * child);        
    void invalidate();
    bool valid();
    int get_move() const;
    int get_visits() const;
    int get_ravevisits() const;        
    int do_extend() const;
    void set_best();
    void set_move(int move);
    void set_visits(int visits);
    void set_blackwins(int wins);
    void set_extend(int runs);
    void update(Playout & gameresult, int color); 
    void updateRAVE(Playout & playout, int color);    
    UCTNode* uct_select_child(int color);    
    UCTNode* get_first_child();
    UCTNode* get_pass_child();
    UCTNode* get_nopass_child();
    UCTNode* get_sibling();
    void sort_children(int color);    
    SMP::Mutex & get_mutex();

private:            
           
    void link_child(UCTNode * newchild);        
        
    // Tree data
    UCTNode* m_firstchild;
    UCTNode* m_nextsibling;                  
    // Move
    int m_move;           
    // UCT
    int m_blackwins;
    int m_visits;      
    // RAVE
    int m_ravestmwins;    
    int m_ravevisits;  

    // alive (superko)
    bool m_valid;
    // extend node
    int m_extend;
    // mutex    
    SMP::Mutex m_nodemutex;
};

#endif
