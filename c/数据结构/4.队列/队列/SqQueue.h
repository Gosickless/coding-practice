#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define elemtype int 
#define MAX 101
#define ERROR -1

#ifndef _LinkQueue_

typedef struct SqQueue
{
	elemtype* base;
	int front;
	int rear;
}SqQueue;

void InitQueue(SqQueue* Q);

int QueueEmpty(SqQueue Q);

int QueueLength(SqQueue Q);

elemtype GetHead(SqQueue Q);

void EnQueue(SqQueue* Q, elemtype e);

void DeQueue(SqQueue* Q, elemtype* e);

void QueueTraverse(SqQueue Q);

void ClearQueue(SqQueue* Q);

void DestroyQueue(SqQueue* Q);

#else

typedef struct QNode
{
	elemtype data;
	struct QNode* next;
}QNode, * QueuePtr;

typedef struct LinkQueue
{
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;

#endif 
