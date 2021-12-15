#include <iostream>
using namespace std;

// 条款05：了解C++默默编写并调用哪些函数

/*
 情况1：包含引用成员或const成员
*/
template <class T>
class NamedObejct {
private:
    string& name_value;    // 内含引用成员，编译器不会自动生成copy assignment操作符
    const T object_value;  // 或内含const成员，编译器也不会自动生成copy assignment操作符

public:
    NamedObejct(string& name, const T& value) : name_value(name), object_value(value) {}
};

/*
情况二：基类中将copy assignment操作符声明为private权限
*/
class Base {
private:
    int value;
    Base& operator=(Base& rhs);

public:
    Base(int value = 10) : value(value) {}
};

class Derived : public Base {
public:
    using Base::Base;
};

int main() {
    string x = "Hello", y = "World";
    NamedObejct<int> p(x, 123);
    NamedObejct<int> q(y, 2345);
    // p = q; 编译错误
    /*

    function "NamedObejct<T>::operator=(const NamedObejct<int> &) [with T=int]"
    (declared implicitly) cannot be referenced -- it is a deleted function
    */

    Derived b(10), c(11);
    // b = c; 编译错误

    /*
    function "Derived::operator=(Derived &)" (declared implicitly)
     cannot be referenced -- it is a deleted function C/C++(1776)
    */

    return 0;
}