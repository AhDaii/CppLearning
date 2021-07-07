#include <iostream>
using namespace std;
int cnt = 0;

void fun(const char *str, int n = 0) {
    if(n)
        for(int i = 0; i < cnt; i ++)
            cout << str << endl;
    else 
        cout << str << endl;
    cnt ++;
}

int main() {
    const char *str = "Hello";
    fun(str, 1);
    cout << "---------------" << endl;
    fun(str);
    cout << "---------------" << endl;
    fun(str, 1);

    /* 
        Result:
        ---------------
        Hello
        ---------------
        Hello
        Hello
     */
    return 0;
}