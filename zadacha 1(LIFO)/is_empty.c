#include "head.h"

bool is_empty(int* stack)   //������� �������� �� �������
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
