#include <iostream>
using namespace std;

// 条款12：复制对象时勿忘其每一个成分

class Base {
public:
    Base() {}
    Base(const Base& rhs) {
        cout << "Base copy constructor" << endl;
    }
    Base& operator=(const Base& rhs) {
        cout << "Base copy assignment operator" << endl;
        return *this;
    }
};

class Derived : public Base {
public:
    Derived() {}
    Derived(const Derived& rhs) : Base(rhs) {
        cout << "Derived copy constructor" << endl;
    }
    Derived& operator=(const Derived& rhs) {
        Base::operator=(rhs);
        cout << "Derived copy assignment operator" << endl;
        return *this;
    }
};

int main() {
    Derived a;
    Derived b(a);
    a = b;
    return 0;
}