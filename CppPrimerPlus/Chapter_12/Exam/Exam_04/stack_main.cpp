#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s, tmp(20);
    for(int i = 0; i < 20; i ++)
        tmp.push(i);
    s = tmp;
    while(!s.isempty()) {
        Stack::Item item;
        s.pop(item);
        cout << item << endl;
    }
    return 0;
}