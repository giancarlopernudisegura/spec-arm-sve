#include "config.h"

#include "SMP.h"

SMP::Mutex::Mutex() {
    m_lock = 0;
}

SMP::Lock::Lock(Mutex & m) {
    m_mutex = &m;   
}

SMP::Lock::~Lock() {    
    m_mutex->m_lock = 0;    
}

int SMP::get_num_cpus() {
    return 1;
}
