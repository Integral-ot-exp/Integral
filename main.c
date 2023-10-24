#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define N 5
#define n 2

void show(int*);
void push(int*);
int pop(void);
bool is_empty(int*);
bool is_full(int*);

int main()  //Задача 1
{
    setlocale(LC_ALL, "RUS");
    size_t i = 0;
    int stack[N] = {NULL, 2, NULL, 4, 5};

    show(stack); //Вывод стека
    printf("\n");
    switch(is_empty(stack)) //Проверка стека на пустоту
    {
    case 0:
        printf("Stack is empty\n");
        break;
    default:
        break;
    }
    switch(is_full(stack)) //Проверка стека на переполнение
    {
    case 0:
        printf("Stack is full\n");
        break;
    default:
        break;
    }

    push(stack);
    return 0;
}

void show(int* stack)
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

bool is_empty(int* stack)
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

bool is_full(int* stack)
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

void push(int* stack)
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
