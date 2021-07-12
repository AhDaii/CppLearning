#include <iostream>
using namespace std;

int main() {
    char *a[12] = {"January", "Febuary", "March", "April", "May", "June", "July", "August", "September", "October",
                    "November", "December"};

    int month = 0, cnt[3][12], year_sum = 0, three_year_sum = 0, year = 0;

    while(year < 3) {
        month = 0;
        cout << "year " << year + 1 << ":" << endl;
        while(month < 12) {
            cout << a[month] << ":";
            cin >> cnt[year][month];
            month ++;
        }
        year ++;
    } 

    for(int i = 0; i < 3; i ++) {
        year_sum = 0;
        for(int j = 0; j < 12; j ++)
            year_sum += cnt[i][j];
        three_year_sum += year_sum;
        cout << "year " << i + 1 << ": " << year_sum << endl;
    }
    cout << three_year_sum << endl;
    return 0;
}