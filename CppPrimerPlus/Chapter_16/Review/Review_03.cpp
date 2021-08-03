#include <iostream>
#include <string>
using namespace std;

void allToUpper(string& str) {
    for(auto& ch : str)
        ch = toupper(ch);
}

int main() {
    string s("AaBb");
    allToUpper(s);
    cout << s;
    return 0;
}