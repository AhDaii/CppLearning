#include <iostream>
using namespace std;

// 条款07：为多态基类声明virtual析构函数

class Abs {
public:
    virtual ~Abs() = 0;
};

Abs::~Abs() {
    cout << "~Abs()" << endl;
}

class Base : public Abs {
public:
    ~Base() {
        cout << "~Base()" << endl;
    }
};

int main() {
    Base* b = new Base();
    delete b;
    return 0;
}