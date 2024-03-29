#include "queue.h"
#include <iostream>

Queue::Queue()
{
    head = tail = nullptr;
}

bool Queue::enQueue(int *dat)
{
    Node *p = Node::MountNode(dat);

    if(!p)
    {
        return false;
    }
    if(!head)
    {
        head = tail = p;
    }else
    {
        tail->SetNext(p);
        tail = p;
    }
    return true;
}
bool Queue::deQueue(int *dat)
{
    if(!head)
    {
        return false;
    }
    Node *p = head;
    head = p->GetNext();
    Node::DesmountNode(dat, p);
    if(!head)
    {
        tail = nullptr;
    }
    return true;
}
bool Queue::IsEmpty()
{
    return !head;
}
void Queue::ListAll()
{
    Node *p = head;

    while(p)
    {
        std::cout<<p->GetD()<<" ";
        p = p->GetNext();
    }
}
