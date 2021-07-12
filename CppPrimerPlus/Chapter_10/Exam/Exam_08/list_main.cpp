#include "list.h"
#include <iostream>
using namespace std;

void add(Item &item) {
    item += 1;
}


int main() {
    List list;
    list.show();
    for(int i = 0; i < 10; i ++) {
        if(list.pushBack(i)) 
            cout << "push back Item[" << i << "] success!" << endl;
        else 
            cout << "push back Item[" << i << "] failed!" << endl;
    }
    list.show();
    list.visit(add);
    list.show();
    return 0;
}