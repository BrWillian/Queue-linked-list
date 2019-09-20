#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"

class Queue
{
public:
    Node *head;
    Node *tail;
    Queue();
    bool enQueue(int *dat);
    bool deQueue(int *dat);
    bool IsEmpty();
    void ListAll();
};

#endif // QUEUE_H
