#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool check(string& str) {
    string tmp;
    for(auto it : str)
        if(isalpha(it))
            tmp += tolower(it);
    string tmp2 = tmp;
    reverse(tmp2.begin(), tmp2.end());
    return tmp2 == tmp;
}

int main() {
    string str = "Madam, I'm Adam";
    if(check(str))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}