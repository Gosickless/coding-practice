#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define elemtype int

#define MAX 100
#define ADD 10

typedef struct SqStack
{
	elemtype* top;
	elemtype* base;
	int stacksize;
}SqStack;

void InitStack(SqStack* S);

int StackEmpty(SqStack S);

elemtype GetTop(SqStack S);

int StackLength(SqStack S);

void Push(SqStack* S, elemtype e);

void Pop(SqStack* S, elemtype* e);

void StackTraverse(SqStack S);

void ClearStack(SqStack* S);

void DestroyStack(SqStack* S);
