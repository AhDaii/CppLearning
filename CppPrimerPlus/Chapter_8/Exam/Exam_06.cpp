#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T *arr, int len) {
    T res = arr[0];
    for(int i = 1; i < len; i ++)
        if(arr[i] > res)
            res = arr[i];
    return res;
}

template <> char* maxn(char* arr[], int len) {
    char *res = arr[0];
    for(int i = 1; i < len; i ++)
        if(strlen(arr[i]) > strlen(res))
            res = arr[i];
    return res;
}

int main() {
    int a[6]{1, 2, 3, 4, 5, 6};
    double b[4]{1.1, 2.2, 3.3, 4.4};
    cout << maxn(a, 6) << endl;
    cout << maxn(b, 4) << endl;
    char *c[5] {"ab", "bab", "abcd", "a", "hello" };
    cout << maxn(c, 5) << endl;
    return 0;
}