#include <iostream>
using namespace std;

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    return x / y;
}

int main() {
    double (*ptr[4])(double, double){add, sub, mul, div};
    int x = 6, y = 2;
    for(int i = 0; i < 4; i ++)
        cout << ptr[i](x, y) << endl;
    return 0;
}