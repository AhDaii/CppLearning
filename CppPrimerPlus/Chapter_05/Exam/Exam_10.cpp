#include <iostream>
using namespace std;

int main() {
    cout << "Enter number of rows: ";
    int N;
    cin >> N;
    for(int i = 0; i < 5; i ++) {
        for(int j = 0; j < 4 - i; j ++)
            cout << '.';
        for(int j = 0; j <= i; j ++)
            cout << '*';
        cout << endl;
    }
    return 0;
}