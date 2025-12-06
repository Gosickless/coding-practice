#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ERROR -1
typedef char elemtype;
#define malloc(x,y) (x*)malloc(y*sizeof(x))

typedef struct BiTNode
{
	elemtype data;
	struct BiTNode* lchild, * rchild;
}BiTNode, * BiTree;

typedef struct SqQueue
{
	BiTree base;
	int front;
	int rear;
	int maxsize;
}SqQueue;

void CreatTree(BiTree* T);



