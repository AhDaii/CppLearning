#include <iostream>
using namespace std;
const int SIZE = 5;

double fun(const double *, int);

int main() {
    double arr[SIZE]{2.2, 1.1, 3.3, 2.1, 9.4};

    cout << fun(arr, SIZE);
    return 0;
}

double fun(const double *arr, int size) {
    double res = arr[0];
    for(int i = 1; i < size; i ++)
        if(arr[i] > res)
            res = arr[i];
    return res;
}