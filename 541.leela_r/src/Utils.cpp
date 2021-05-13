#include "config.h"

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#ifdef WIN32
#include <windows.h>
#endif

#include "Utils.h"

bool Utils::input_causes_stop() {
    char c;
    
    c = std::cin.get();    
    std::cin.unget();
    
    return true;          
}

bool Utils::input_pending(void) {
    return false;
}

void Utils::myprintf(const char *fmt, ...) {
    va_list ap;      
  
    va_start(ap, fmt);      
    vfprintf(stdout, fmt, ap);
    va_end(ap);
}

void Utils::gtp_printf(int id, const char *fmt, ...) {
    va_list ap;  
  
    if (id != -1) {
        fprintf(stdout, "=%d ", id);
    } else {
        fprintf(stdout, "= ");
    }        
  
    va_start(ap, fmt);  
    
    vfprintf(stdout, fmt, ap);
    printf("\n\n");
  
    va_end(ap);
}

void Utils::gtp_fail_printf(int id, const char *fmt, ...) {
    va_list ap;  
      
    if (id != -1) { 
        fprintf(stdout, "?%d ", id);
    } else {
        fprintf(stdout, "? ");
    }
  
    va_start(ap, fmt);       
        
    vfprintf(stdout, fmt, ap);
    printf("\n\n");                   
  
    va_end(ap);
}
