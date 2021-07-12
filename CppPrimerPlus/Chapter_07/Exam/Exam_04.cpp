#include <iostream>
using namespace std;

double calc(int number, int pick) {
    double res = 1;
    for(int i = number, j = pick; j > 0; i --, j--)
        res *= i / j;
    return 1.0 / res;
}

int main() {
    cout << calc(47, 5) * calc(27, 1);
    return 0;
}