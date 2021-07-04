#include <iostream>
using namespace std;
const int SIZE = 10;

int Fill_array(double *arr, int len) {
    int i = 0;
    double x;
    while(cin >> x && i < len) {
        arr[i ++ ] = x;
    }
    return i; 
}

void Show_array(double *arr, int len) {
    for(int i = 0; i < len; i ++)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double *arr, int len) {
    for(int i = 1; i < len / 2; i ++) {
        double tmp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = tmp;
    }
}


int main() {
    double arr[SIZE];
    int len = Fill_array(arr, SIZE);
    Show_array(arr, len);
    Reverse_array(arr, len);
    Show_array(arr, len);
    return 0;
}