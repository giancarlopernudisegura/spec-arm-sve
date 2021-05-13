#include <iostream>
#include <memory>
#include <stdio.h>
#if defined(SPEC)
# include <cstdlib> // needed for EXIT_FAILURE
#endif

#include "config.h"

#include "Zobrist.h"
#include "GTP.h"
#include "Random.h"
#include "Utils.h"
#include "Matcher.h"
#include "SGFTree.h"
#include "UCTSearch.h"

using namespace Utils;

int main (int argc, char *argv[]) {        
    int done = false;
    int gtp_mode;    
    std::string input;      
    std::string filename;
    
    /* default to prompt */
    gtp_mode = false;
    
    if (argc < 2) {    
        std::cout << "No file specifided" << std::endl;
        return EXIT_FAILURE;
    } else {
        filename.assign(argv[1]);
    }

    std::cout.setf(std::ios::unitbuf);
    std::cin.setf(std::ios::unitbuf);
    std::cerr.setf(std::ios::unitbuf);    
    
#if !defined(SPEC)
    setbuf(stdout, NULL);
    setbuf(stdin, NULL);
    setbuf(stderr, NULL);    
#endif
                    
    std::auto_ptr<Random> rng(new Random(5489UL));          
    Zobrist::init_zobrist(*rng);    

    Matcher::get_Matcher();
    
    std::auto_ptr<GameState> maingame(new GameState);                

    int counter = 0;
     
    try {
        for (;;) {
            std::auto_ptr<SGFTree> sgftree(new SGFTree);

            sgftree->load_from_file(filename, counter++);                
            *maingame = sgftree->get_mainline();

	    int move;
            do {
                std::auto_ptr<UCTSearch> search(new UCTSearch(*maingame));

                move = search->think(maingame->get_to_move(), UCTSearch::NORMAL);

                maingame->play_move(move);  
                maingame->display_state();                              
            } while (maingame->get_passes() < 2 && move != FastBoard::RESIGN);
        }
    } catch (std::exception & e) {
    };

    return 0;
}
