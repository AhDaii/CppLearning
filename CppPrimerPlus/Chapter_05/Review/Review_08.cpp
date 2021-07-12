#include <iostream>
using namespace std;

int main() {
    int x = (1,024);
    cout << x << endl;
    int y;
    y = 1,024;
    cout << y;
    return 0;

    /* 
    Result: 20
            1
            为什么这x等于20，怎么想也想不明白，有大佬看到这的可以发个issue告诉我下QAQ
            我看了汇编代码是直接赋值的20，实在搞不懂
            5           int x = (1,024);
            0x000000000040155d <+13>:    movl   $0x14,-0x4(%rbp) 
    
     */
}