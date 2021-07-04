#include <iostream>
using namespace std;
const int SIZE = 10;

int input_score(int *arr, int len) {
    int i = 0, x;
    while(cin >> x && i < len) {
        arr[i ++ ] = x;
    }
    return i; // 因为可以提前结束，需要返回实际长度
}

void show_score(int *arr, int len) {
    for(int i = 0; i < len; i ++)
        cout << arr[i] << " ";
    cout << endl;
}

void show_average(int *arr, int len) {
    double sum = 0;
    for(int i = 0; i < len; i ++)
        sum += arr[i];
    cout << "Average: " << sum / len << endl;
}

int main() {
    int arr[SIZE];
    int len = input_score(arr, SIZE);
    show_score(arr, len);
    show_average(arr, len);
    return 0;
}