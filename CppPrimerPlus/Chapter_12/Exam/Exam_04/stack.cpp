#include "stack.h"

Stack::Stack(int n) {
    pitems = new Item[n];
    top = 0;
    size = n;
}

Stack::Stack(const Stack & st) {
    pitems = new Item[st.size];
    for(int i = 0; i < st.size; i ++)
        pitems[i] = st.pitems[i];
    top = st.top;
    size = st.size;
}

Stack::~Stack() {
    delete [] pitems;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == size;
}

bool Stack::push(const Item & item) {
    if(top == size)
        return false;
    else {
        pitems[top ++] = item;
        return true;
    }
}

bool Stack::pop(Item & item) {
    if(top == 0)
        return false;
    else {
        item = pitems[-- top];
        return true;
    }
}

Stack& Stack::operator=(const Stack & st) {
    if(this == &st)
        return *this;

    delete [] pitems;
    pitems = new Item[st.size];
    for(int i = 0; i < st.size; i ++)
        pitems[i] = st.pitems[i];
    top = st.top;
    size = st.size;
    return *this;
}