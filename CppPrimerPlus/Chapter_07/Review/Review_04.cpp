#include <iostream>
using namespace std;
const int SIZE = 5;

void fun(int *, int *, int);

int main() {
    int arr[SIZE]{1, 2, 3, 4, 5};
    for(int num : arr)
        cout << num << ' ';
    cout << endl;

    fun(arr, arr + SIZE, 2);

    for(int num : arr)
        cout << num << ' ';
    cout << endl;
    return 0;
}

void fun(int *bg, int *ed, int x) {
    for(int *i = bg; i != ed; ++ i)
        *i = x;
}