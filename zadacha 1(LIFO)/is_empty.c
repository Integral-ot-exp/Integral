#include "head.h"

bool is_empty(int* stack)   //функция проверки на пустоту
{
    size_t i = 0;
    int sum = 0;
    for(i; i < N; i++)
    {
        sum = sum + abs(stack[i]);
    }
    if(sum == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
