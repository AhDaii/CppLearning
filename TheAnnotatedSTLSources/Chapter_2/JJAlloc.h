#ifndef _JJALLOC_H_
#define _JJALLOC_H_

#include <climits>
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <new>

namespace JJ
{
    using namespace std;

    // 申请空间
    template <class T>
    inline T* _allocate(ptrdiff_t size, T*) {
        set_new_handler(0);  // 卸载目前的内存分配异常处理函数, 直接抛出bad_alloc异常
        T* tmp = (T*)(::operator new((size_t)(size * sizeof(T))));
        if(tmp == 0) {  // 申请失败
            cerr << "out of memory" << endl;
            exit(1);
        }
        return tmp;
    }

    // 释放空间
    template <class T>
    inline void _deallocate(T* bufffer) {
        ::operator delete(bufffer);
    }

    // 生成对象
    template <class T1, class T2>
    inline void _construct(T1* p, const T2& value) {
        new(p) T2(value);
    }

    // 销毁对象
    template <class T>
    inline void _destory(T* ptr) {
        ptr->~T();
    }

    template <class T>
    class allocator {
    public:
        typedef T value_type;
        typedef T* pointer;
        typedef const T* const_pointer;
        typedef T& reference;
        typedef const T& const_reference;
        typedef size_t size_type;
        typedef ptrdiff_t difference_type;

        // 重新绑定成其他类型
        template <class U>
        struct rebind {
            typedef allocator<U> other;
        };

        // 申请空间
        // hint表示位置
        pointer allocate(size_type n, T* hint = 0) {  // 不能使用const void *，编译报错
            return _allocate((difference_type)n, hint);
        }

        // 释放空间
        void deallocate(pointer p, size_type n) {
            _deallocate(p);
        }

        // 生成对象
        void construct(pointer p, const T& values) {
            _construct(p, values);
        }

        // 销毁对象
        void destory(pointer p) {
            _destory(p);
        }

        // 返回对象地址
        pointer address(reference x) {
            return (pointer)&x;
        }

        // 返回const对象地址
        const_pointer address(const_reference x) {
            return (const_pointer)&x;
        }

        size_type max_size() const {
            return size_type(UINT_MAX / sizeof(T));
        }
    };

};  // namespace JJ

#endif