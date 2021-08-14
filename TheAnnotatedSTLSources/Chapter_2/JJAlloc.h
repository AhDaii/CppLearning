#ifndef _JJALLOC_H_
#define _JJALLOC_H_

#include <climits>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <new>

namespace JJ {
    template <class T>
    inline T* _allocate(ptrdiff_t size, T*) {
        std::set_new_handler(0);  //卸载目前的内存分配异常处理函数, 直接抛出bad_alloc异常
    }
}  // namespace JJ

#endif