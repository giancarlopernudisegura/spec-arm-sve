#ifndef TIMING_H_INCLUDED
#define TIMING_H_INCLUDED

#include "config.h"

#include <time.h>

class Time {    
public:    
    /*
        sets to current time
    */            
    Time(void);
    
    /*  
        time difference in centiseconds
    */        
    static int timediff(Time start, Time end);
    
private:
    int m_time;    
};

#endif
