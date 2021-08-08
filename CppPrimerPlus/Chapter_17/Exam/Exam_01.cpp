#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    while (cin && cin.peek() != '$') {
        cin.get();
        cnt++;
    }
    cout << cnt << " characters before $\n";
    cout << "The next character is " << char(cin.get());
    return 0;
}