#include <iostream>
#include <memory>
using namespace std;

// 条款13：以对象管理资源

enum CLZ {
    CLZ_A,
    CLZ_B
};

class Base {
public:
    virtual void say() const = 0;
};

class A : public Base {
public:
    void say() const {
        cout << "A()" << endl;
    }
};

class B : public Base {
public:
    void say() const {
        cout << "B()" << endl;
    }
};

// factory模式
Base* create_class(CLZ clz) {
    if (clz == CLZ_A)
        return new A();
    else if (clz == CLZ_B)
        return new B();
    else
        return nullptr;
}

void f() {
    // 下面这种写法会造成内存泄漏，可以使用智能指针来解决
    // Base* base = create_class(CLZ_A);
    // throw logic_error("class initialization error");
    shared_ptr<Base> base(create_class(CLZ_A));
    return;
    // delete base;
}

int main() {
    f();
    return 0;
}