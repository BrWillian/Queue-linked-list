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

    fila.enQueue(&x);
    fila.enQueue(&y);
    fila.enQueue(&z);
    fila.ListAll();
}
