#ifndef NODE_H
#define NODE_H


class Node
{
private:
    int D;
    Node *next;
public:
    Node();
    static Node *MountNode(int *dat);
    static void DesmountNode(int *dat, Node *p);
    void SetNext(Node *p);
    Node *GetNext();
};

#endif // NODE_H
