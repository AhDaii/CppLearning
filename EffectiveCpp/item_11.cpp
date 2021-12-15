#include <iostream>
using namespace std;

// 条款11：在operator=中处理“自我赋值”

class Base {
private:
    int* pd;

public:
    Base(int data = 0) : pd(new int(data)) {}

    void swap(Base& rhs) {
        int* tmp = pd;
        pd = rhs.pd;
        rhs.pd = tmp;
    }

    Base& operator=(const Base& rhs) {
        /*
        错误写法1： 如果rhs和当前是同一个对象，delete pd后rhs.pd则指向一个已经被删除的对象
        不具备：自我赋值安全性和异常安全性
        delete pd;
        pd = new int(*rhs.pd);
        return *this;
        */
        /*
        错误写法2：虽然解决了自我赋值的安全性，但如果new int时候失败抛出异常，pd此时将会指向一个已经被删除的对象
        不具备：异常安全性
        if (this == &rhs)
            return *this;
        delete pd;
        pd = new int(*rhs.pd);
        return *this;
        */

        // 正确写法1：此时不需要证同，这段代码能够处理自我赋值
        // int* tmp = pd;
        // pd = new int(*rhs.pd);
        // delete tmp;
        // return *this;

        // 正确写法2：手动创建一个备份
        Base tmp(rhs);
        swap(tmp);
        return *this;
    }

    // 正确写法3：利用按值传递自动创建一个备份
    // Base& operator=(Base rhs) {
    //     swap(rhs);
    //     return *this;
    // }
    friend ostream& operator<<(ostream& os, const Base& base);
};

ostream& operator<<(ostream& os, const Base& base) {
    os << *base.pd;
    return os;
}

int main() {
    Base a(10), b(20), c(30);
    a = b = c;
    cout << a << endl;
    cout << b << endl;
    return 0;
}