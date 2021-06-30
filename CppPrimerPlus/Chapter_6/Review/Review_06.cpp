#include <iostream>
using namespace std;

int main() {
    int x;
    x = -1;
    x = x >= 0 ? x : -x;
    cout << x;
    return 0;
}