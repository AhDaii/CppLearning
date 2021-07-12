#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;
    for(int i = 0; i < 20; i ++) {
        Item tmp = {"david", i * 1.0};
        if(s.push(tmp) == false)
            break;
    }
    while(!s.isempty()) {
        Item tmp;
        s.pop(tmp);
    }
    return 0;
}