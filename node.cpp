#include "node.h"

Node::Node()
{

}
Node *Node::MountNode(int *dat)
{
    Node *p = new Node;

    if(p)
    {
        p->D = *dat;
        p->next = nullptr;
    }

    return p;
}
void Node::DesmountNode(int *dat, Node *p)
{
    if(p)
    {
        *dat = p->D;
        delete p;
    }
}
void Node::SetNext(Node *p)
{
    next = p;
}
Node *Node::GetNext()
{
    return next;
}
