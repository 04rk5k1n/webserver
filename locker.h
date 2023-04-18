#ifdef LOCKER_H
#define LOCKER_H

#include <exception>
#include <pthread.h>
#include <semaphore.h>

//线程同步机制封装类
//互斥锁类

class locker {
public:
    locker() {
        if(pthread_mutex_init(&m_mutex, NULL) != 0) {
            throw std::exception();
        }
    }

    ~locker() {
        phread_mutex_destroy(&m_mutex, NULL);
    }

    bool lock() {
        return phread_mutex_lock
    }

private:
    pthread_mutex_t m_mutex;
}


#endif