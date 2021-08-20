#include <iostream>
using namespace std;

struct NormalFunc {};
struct IntFunc {};

template <class T>
struct TagDispatchTrait {
    using Tag = NormalFunc;
};

template <>
struct TagDispatchTrait<int> {
    using Tag = IntFunc;
};

template <class A>
void internal_f(A a, NormalFunc) {
    cout << "Normal version" << endl;
}

template <class A>
void internal_f(A a, IntFunc) {
    cout << "Int(partial) version" << endl;
}

template <class A>
void f(A a) {
    internal_f(a, typename TagDispatchTrait<A>::Tag{});
}

int main() {
    int x = 1;
    double y = 1.1;

    f(x);
    f(y);

    /* Result:
        Int(partial) version
        Normal version
     */
    return 0;
}