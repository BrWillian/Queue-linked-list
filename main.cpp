#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    Queue fila;

    int x = 0;
    int y = 3;
    int z = 5;
    int k;

    cout<<fila.enQueue(&x);
    cout<<fila.enQueue(&y);
    cout<<fila.enQueue(&z);
    cout<<fila.deQueue(&k);
    cout<<fila.deQueue(&k);
    cout<<fila.deQueue(&k);
    cout<<fila.deQueue(&k);
    cout<<k;
}
