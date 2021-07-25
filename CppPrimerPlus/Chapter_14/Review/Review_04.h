class Worker {

};

template <class Type>
class Stack
{
private:
    enum {MAX = 10};    // constant specific to class
    Type items[MAX];    // holds stack items
    int top;            // index for top stack item
public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Type & item); // add item to stack
    bool pop(Type & item);        // pop top into item
};

template <class Type>
Stack<Type>::Stack()
{
    top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
    return top == 0;
}

template <class Type>
bool Stack<Type>::isfull()
{
    return top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false; 
}

class Stack<Worker*> {
private:
    enum {MAX = 10};
    Worker* items[MAX];
    int top;
public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(Worker* &item);
    bool pop(Worker* &item);
};

Stack<Worker*>::Stack() {
    top = 0;
}

bool Stack<Worker*>::isempty() {
    return top == 0;
}

bool Stack<Worker*>::isfull() {
    return top == MAX;
}

bool Stack<Worker*>::push(Worker* &item) {
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack<Worker*>::pop(Worker* &item) {
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false; 
}