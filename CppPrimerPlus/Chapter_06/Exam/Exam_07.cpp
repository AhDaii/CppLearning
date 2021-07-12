#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int vowels = 0, consonants = 0, other = 0;
    while(cin >> s, s != "q") {
        if(isalpha(s[0])) {
            if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u')
                vowels ++;
            else 
                consonants ++;
        }
        else 
            other ++;
    }
    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << other << " others" << endl;
}