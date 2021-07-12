#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void str_toupper(string &str) {
    for(int i = 0; str[i]; i ++) 
        if(islower(str[i]))
            str[i] = toupper(str[i]);
}

int main() {
    string str;
    cout << "Enter a string (q to quit): ";
    while(getline(cin, str)){
        if(str == "q") {
            cout << "Bye.";
            break;
        }
        str_toupper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
    }

    return 0;
}