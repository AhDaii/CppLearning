#include "list.h"
#include <iostream>

List::List() {
    cur = 0;
}

bool List::isFull() const {
    return cur == MAX;
}

bool List::isEmpty() const {
    return cur == 0;
}

bool List::pushBack(const Item &item) {
    if(cur == MAX)
        return false;
    else  {
        arr[cur ++] = item;
        return true;
    }
}

void List::visit(void (*pf)(Item &item)) {
    for(int i = 0; i < cur; i ++)
        pf(arr[i]);
}

void List::show() const {
    if(cur == 0)
        std::cout << "[SHOW] the list is empty" << std::endl;
    else {
        std::cout << "[SHOW] elements in the list:";
        for(int i =0; i < cur; i ++)
            std::cout << " " << arr[i];
        std::cout << std::endl;
    }
}