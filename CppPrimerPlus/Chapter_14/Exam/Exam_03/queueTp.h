#ifndef _QUEUETP_H_
#define _QUEUETP_H_

template <typename T>
class QueueTp {
private:
    enum {Q_SIZE = 10};
    struct Node {
        T item;
        Node *next;
    };
    Node *front, *rear;
    int items;
    const int qsize;
public:
    QueueTp(int size = 0): front(nullptr), rear(nullptr), items(0), qsize(size) {}
    ~QueueTp();
    bool isempty() const { return items == 0; }
    bool isfull() const { return items ==qsize; }
    int queuecount() const { return items; }
    bool enqueue(const T& item);
    bool dequeue(T& item);
}; 

template <typename T>
QueueTp<T>::~QueueTp() {
    Node *tmp;
    while(front != nullptr) {
        tmp = front;
        front = front->next;
        delete tmp;
    }
}

template <typename T>
bool QueueTp<T>::enqueue(const T& item) {
    if(items == qsize)
        return false;
    Node *tmp = new Node;
    tmp->item = item;
    tmp->next = nullptr;
    
    if(front == nullptr) {
        front = rear = tmp;
    } 
    else {
        rear->next = tmp;
        rear = rear->next;
    }
    items ++;
    return true;
}

template <typename T>
bool QueueTp<T>::dequeue(T& item) {
    if(items == 0)
        return false;
    item = front->item;
    Node *tmp = front;
    front = front->next;
    delete tmp;
    items --;
    return true;
}

#endif