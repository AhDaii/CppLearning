#include <iostream>
#include <memory>
#include <pthread.h>
using namespace std;

// 条款14：在资源管理类中小心copying行为

void lock(pthread_mutex_t* mutex) {
    pthread_mutex_lock(mutex);
}

void unlock(pthread_mutex_t* mutex) {
    pthread_mutex_unlock(mutex);
}

void deleter(pthread_mutex_t* mutex) {
    unlock(mutex);
}

class Lock {
private:
    shared_ptr<pthread_mutex_t> mutexPtr;

public:
    Lock(pthread_mutex_t* pm) : mutexPtr(pm, deleter) {
        lock(mutexPtr.get());
    }
};

int main() {
    {
        pthread_mutex_t t;
        Lock lock(&t);
    }
    return 0;
}