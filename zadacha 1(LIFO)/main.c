#include "head.h"

static int stack[RAZ] = {'\0','\0','\0','\0','\0'};
static int n = 2;

int main()  //������ 1
{
    setlocale(LC_ALL, "RUS");

    printf("��������� ����:\n");
    show();    //����� �����
    printf("\n");

    switch(push(n)) //�������� ����� n � ����
    {
    case 0:
        printf("�������!\n");
        break;
    case 1:
        printf("���� ����������\n");
        break;
    }
    switch(is_empty()) //�������� ����� �� �������
    {
    case 0:
        printf("Stack is empty\n");
        break;
    case 1:
        break;
    }

    switch(is_full())  //�������� ����� �� ������������
    {
    case 0:
        printf("Stack is full\n");
        break;
    case 1:
        break;
    }
    return 0;
}

void show(void)   //����� �����
{
    int per;
    size_t k = 0, i = 0;
    for (k = 0; k < RAZ; k++)

    {
        for (i = 0; i < RAZ; i++)
        {
            if (stack[i] == 0)
            {
                per = stack[i + 1];
                stack[i + 1] = stack[i];
                stack[i] = per;
            }
        }
    }
    for(i = 0; i < RAZ; i++)
    {
        printf("%d\t", stack[i]);
    }
}

bool is_empty(void)   //������� �������� �� �������
{
    size_t i = 0;
    int sum = 0;
    for(i; i < RAZ; i++)
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

bool is_full(void)    //������� �������� �� �����������
{
    size_t i = 0;
    int nol = 0;
    for(i; i < RAZ; i++)
    {
        if(stack[i] == 0)
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

int pop(void)
{
    size_t i = 0;
    int a;
    while(stack[i] != 0)
    {
        i++;
    }
    a = stack[i - 1];
    stack[i - 1] = 0;
    if (stack[i - 1] == 0)
    {
        return a;
    }
    else
    {
        return 1;
    }
}

int push(int n)   //������� ����������
{
    size_t i = 0;
    while(stack[i] != 0)
    {
        i++;
    }
    stack[i] = n;
    if (i != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
