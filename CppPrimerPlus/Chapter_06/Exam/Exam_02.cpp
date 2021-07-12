#include <iostream>
#include <array>
using namespace std;

int main() {
    array<double, 10> arr;
    double x, sum = 0, average = 0;
    int count = 0, count_good = 0;
    while(count < 10 && cin >> x) {
        arr.at(count) = x;
        sum += x;
        count ++;
    }
    average = sum / count;
    for(int i = 0; i < count; i ++)
        if(arr[i] > average)
            count_good ++;
    cout << "Average: " << average << ", Bigger than average: " << count_good;
    return 0;
}