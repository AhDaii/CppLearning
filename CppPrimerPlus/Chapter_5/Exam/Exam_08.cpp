#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char* str;
    int count = 0;

    cout << "Enter words (to stop, type the word done):" << endl;
    while(cin >> str, strcmp(str, "done") != 0) {
        count ++;
    }
    cout << "You entered a total of " << count << " words.";

    return 0;
}