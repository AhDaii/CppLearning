#include <iostream>
using namespace std;

double fun(int x, int y) {
    return 2.0 * x * y / (x + y);
}

int main() {
    int x, y;
    while(cin >> x >> y, x != 0 && y != 0) {
        cout << fun(x, y) << endl;
    }
    return 0;
}