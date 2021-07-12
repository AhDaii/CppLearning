#ifndef _LIST_H_
#define _LIST_H_


typedef int Item;

class List {

private:
    enum { MAX = 5 };
    Item arr[MAX];
    int cur;

public:
    List();
    bool isFull() const;
    bool isEmpty() const;
    bool pushBack(const Item &item);
    void visit(void (*pf)(Item &item));
    void show() const;

};

#endif