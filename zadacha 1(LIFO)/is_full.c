#include "head.h"

bool is_full(int* stack)    //функция проверки на переполение
{
    size_t i = 0;
    int nol = 0;
    for(i; i < N; i++)
    {
        if(stack[i] == NULL)
        {
            nol++;
        }
    }
    if(nol == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
