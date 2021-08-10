#include <iostream>
using namespace std;

template <typename T>
long double sum_value(const T& t) {
    return t;
}

template <typename T, typename... Args>
long double sum_value(const T& t, const Args&... args) {
    return t + sum_value(args...);
}

int main() {
    int a = 1;
    char b = '\2';
    double c = 3.0;
    float d = 4.0f;
    cout << sum_value(a, b, c, d);
    return 0;
}