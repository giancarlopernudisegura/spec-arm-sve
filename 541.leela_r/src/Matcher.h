#ifndef MATCHER_H_INCLUDED
#define MATCHER_H_INCLUDED

#include <vector>
#include <boost/tr1/array.hpp>
#include <bitset>

class Matcher {
public:    
    Matcher();        

    int matches(int color, int pattern);

    /*
        return the "global" matcher
    */            
    static Matcher* get_Matcher(void);
    static void set_Matcher(Matcher * m);

private:            
    unsigned char clip(int val);

    static Matcher* s_matcher;   

    std::tr1::array<std::vector<uint8>, 2> m_patterns;
};

#endif
