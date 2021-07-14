#include "vector.h"
#include <iostream>
using namespace std;
using VECTOR::Vector;

int main() {
    Vector v(30, 40, Vector::RECT);
    cout << v << endl;
    v.polar_mode();
    cout << v << endl;
    double res = v; // conversion function
    cout << res << endl;
    return 0;
}