#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check(string& str) {
    string tmp = str;
    reverse(tmp.begin(), tmp.end());
    return str == tmp;
}

int main() {
    string str = "12321";
    if(check(str))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}