#include <iostream>
using namespace std;

// 条款09：绝不在构造和析构过程中调用virtual函数

// 方法：将virtual函数改为non-virtual函数
class Base {
public:
    Base() {
        log();
    }
    virtual void log() const = 0;
};

void Base::log() const {
    cout << "Base" << endl;
}

class Derived : public Base {
public:
    Derived() {
        log();
    }
    virtual void log() const {
        cout << "Derived" << endl;
    }
};

int main() {
    Derived d;
    return 0;
}