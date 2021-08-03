#include <iostream>
#include <algorithm>
using namespace std;

int reduce(long ar[], int n) {
    sort(ar, ar + n);
    return unique(ar, ar + n) - ar;
}

int main() {
    long ar[5] = {2, 2, 2, 1, 3};
    int len = reduce(ar, 5);
    for(int i = 0; i < len; i ++)
        cout << ar[i] << ' ';
    return 0;
}