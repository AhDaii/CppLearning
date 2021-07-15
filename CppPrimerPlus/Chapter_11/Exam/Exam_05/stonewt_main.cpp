#include "stonewt.h"
#include <iostream>
using namespace std;

int main() {
    Stonewt a(10, 8), b(148);
    cout << a;
    cout << b;
    Stonewt tmp = a * 2;
    cout << tmp;
    tmp = 2 * a;
    cout << tmp;
    tmp = tmp - b;
    cout << tmp;
    tmp = tmp + b;
    cout << tmp;
    return 0;
}