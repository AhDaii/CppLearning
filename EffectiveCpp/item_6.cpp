#include <iostream>
using namespace std;

// 条款06：若不想使用编译器自动生成的函数，就该明确拒绝

/*
方法一：将copy constructor和copy assignment的权限设置为private
      可以在编译期检测出问题，但如果member或者friend函数不小心使用，连接器会报错
*/
class Test {
private:
    Test(Test&);             // 禁用copy构造函数
    Test& operator=(Test&);  // 禁用copy assignment操作符
public:
    Test() {}
    void copy(Test& t) {
        *this = t;
    }
};

/*
方法二：继承Uncopyable类，Uncopyable类中已经将copy constructor和copy assignment的权限设置为private了
      相比方法一的优点在于如果member或friend函数不小心使用，编译期就会报错。
*/
class Uncopyable {
protected:
    Uncopyable() {}
    ~Uncopyable() {}

private:
    Uncopyable(Uncopyable&);
    Uncopyable& operator=(Uncopyable&);
};

class Test2 : private Uncopyable {
public:
    Test2() {}
    void copy(Test2& t) {
        // *this = t; 编译错误
        /*
        function "Test2::operator=(Test2 &)" (declared implicitly) cannot be referenced
        -- it is a deleted functionC/C++(1776)
        */
    }
};

int main() {
    Test x, y;
    x.copy(y);
    /*
    /usr/bin/ld: /tmp/cctRTbQR.o: in function `Test::copy(Test&)':
    item_6.cpp:(.text._ZN4Test4copyERS_[_ZN4Test4copyERS_]+0x23): undefined reference to `Test::operator=(Test&)'
    collect2: error: ld returned 1 exit status
    */
    return 0;
}