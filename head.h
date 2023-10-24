#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define N 5
#define n 2

#endif // HEAD_H_INCLUDED

void show(int*);
void push(int*);
void pop(int*);
bool is_empty(int*);
bool is_full(int*);

int stack[N] = {0, 0, 0, 0, 0};
