#include <iostream>
using namespace std;

int main() {
    int line = 0;
    char ch;
    while(cin.get(ch), ch != 'Q')
        if(ch == '\n')
            line ++;
    cout << line;
    return 0;
}