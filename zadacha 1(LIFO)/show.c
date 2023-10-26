#include "head.h"

void show(int* stack)   //Вывод стека
{
    int per;
    size_t k = 0, i = 0;
    for (k = 0; k < N; k++)
    {
        for (i = 0; i < N; i++)
        {
            if (stack[i] == 0)
            {
                per = stack[i + 1];
                stack[i + 1] = stack[i];
                stack[i] = per;
            }
        }
    }
    for(i = 0; i < N; i++)
    {
        printf("%d\t", stack[i]);
    }
}
