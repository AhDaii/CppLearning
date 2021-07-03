#include <iostream>
using namespace std;

int replace(char *, char, char);

int main() {
    char str[15] = "abaaabb";

    cout << replace(str, 'b', 'a');
    return 0;
}

int replace(char *str, char c1, char c2) {
    int cnt = 0;
    for(int i = 0; str[i]; i ++)
        if(str[i] == c1) {
            str[i] = c2;
            cnt ++;
        }
    return cnt;
}