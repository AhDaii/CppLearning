#include <iostream>
using namespace std;

template <typename T>
T max5(T *arr) {
    T res = arr[0];
    for(int i = 0; i < 5; i ++)
        if(arr[i] > res)
            res = arr[i];
    return res;
}

int main() {
    int a[5]{1, 2, 3, 4, 5};
    double b[5]{1.1, 2.2, 3.3, 4.4, 5.5};
    cout << max5(a) << endl;
    cout << max5(b) << endl;
    return 0;
}