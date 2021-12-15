#include <iostream>
using namespace std;

// 条款10: 令operator=返回一个reference to *this
// 该条款解决赋值连锁形式，如a = b = c = 1，该条款同样适用于+=,*=,-=等

class Test {
private:
    int data;

public:
    Test(int data = 0) : data(data) {}
    Test& operator=(const Test& rhs) {
        this->data = rhs.data;
        return *this;
    }
    friend ostream& operator<<(ostream& os, const Test& t);
};

ostream& operator<<(ostream& os, const Test& t) {
    os << t.data;
    return os;
}

int main() {
    Test t(10), t2(12), t3(13);
    t = t2 = t3 = 100;
    cout << t;
    return 0;
}