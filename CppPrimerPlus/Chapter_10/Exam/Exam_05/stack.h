#ifndef _STACK_H_
#define _STACK_H_

struct customer {
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack {
private:
    enum {MAX = 10}; // or static const int MAX = 10
    Item items[MAX];
    int top;
    double sum;

public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);

};

#endif