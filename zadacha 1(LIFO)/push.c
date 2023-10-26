#include "head.h"

void push(int* stack)   //функция заполнения
{
    size_t i = 0;
    while(stack[i] != 0)
    {
        i++;
    }
    stack[i] = n;
    for(i = 0; i < N; i++)
    {
        printf("%d\t", stack[i]);
    }
    return stack;
}
