#include <iostream>
using namespace std;

int main() {
    char *a[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October",
                    "November", "December"};
    int month = 0, cnt[12], sum = 0;

    while(month < 12) {
        cout << a[month] << ":";
        cin >> cnt[month];
        month ++;
    }
    
    for(int i = 0; i < 12; i ++)
        sum += cnt[i];
    cout << "sum: " << sum;
    return 0;
}