#include <iostream>
using namespace std;

int main() {
    int i, j, sum = 0;
    cin >> i >> j;
    while(i <= j) {
        sum += i;
        i ++;
    }
    cout << sum;
    return 0;
}