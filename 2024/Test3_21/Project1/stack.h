#pragma once
#include<stdlib.h>
#include<iostream>
using namespace::std;

struct stack
{
  int* a;
  int size;
  int capacity;
};

void stackInit(struct stack* ps, int n = 4);

void StackPush(struct stack* ps, int x);

void f(int a, char b);


void f(char b, int a);
