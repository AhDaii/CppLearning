#include <iostream>
using namespace std;

template <typename T>
T _max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    cout << _max(1, 2) << endl;
    cout << _max(1.1, 2.2) << endl;
    return 0;
}