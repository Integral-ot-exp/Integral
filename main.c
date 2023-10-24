#include "head.h"

int main()  //Задача 1
{
    setlocale(LC_ALL, "RUS");
    size_t i = 0;
    //int stack[N] = {0, 0, 0, 0, 0};

    printf("Начальный стек:\n");
    show(stack);    //Вывод стека
    printf("\n");

    switch(is_empty(stack)) //Проверка стека на пустоту
    {
    case 0:
        printf("Stack is empty\n");
        break;
    case 1:
        printf("Добавили в стек n = 2\n");
        push(stack);
        printf("\n");
        printf("Отчистили стек\n");
        pop(stack);
        break;
    }

    switch(is_full(stack))  //Проверка стека на переполнение
    {
    case 0:
        printf("Stack is full\n");
        break;
    case 1:
        printf("Добавили в стек n = 2\n");
        push(stack);
        printf("\n");
        printf("Отчистили стек\n");
        pop(stack);
        break;
    }
    return 0;
}

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
