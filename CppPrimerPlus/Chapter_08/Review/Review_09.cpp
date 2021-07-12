#include <iostream>
#include <typeinfo>
using namespace std;

int g(int x) {
    return x;
}

int main() {
    float m = 5.5f;
    float &rm = m;
    cout << typeid(decltype(m)).name() << endl;         // float
    cout << typeid(decltype(rm)).name() << endl;        // float&
    cout << typeid(decltype((m))).name() << endl;       // float&
    cout << typeid(decltype(g(100))).name() << endl;    // int
    cout << typeid(decltype(2.0 * m)).name() << endl;   // double

    return 0;
}