#include "head.h"

void pop(int* stack)
{
    size_t i = 0;
    while(stack[i] != 0)
    {
        i++;
    }
    stack[i - 1] = 0;
    for(i = 0; i < N; i++)
    {
        printf("%d\t", stack[i]);
    }
}
