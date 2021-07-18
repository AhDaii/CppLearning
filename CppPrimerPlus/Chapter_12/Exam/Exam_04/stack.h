#ifndef _STACK_H_
#define _STACK_H_

class Stack {
public:
    typedef unsigned long Item;
private:
    enum {MAX = 10};
    Item * pitems; 
    int size; 
    int top; 
public:
    Stack(int n = MAX); 
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;

    bool push(const Item & item); 
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
};


#endif