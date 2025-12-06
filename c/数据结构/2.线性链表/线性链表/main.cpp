#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"LinkList.h"
#define ERROR -1

int main()
{
	LinkList L;
	InitList(&L);
	for(int i=1;i<=10;i++)
		HeadInsert(L, i);
	L=TailInsert(L);
	PrintList(L);
	int l = ListLength(L);
	printf("%d\n", l);
	LNode* p = LocateElem(L, 10);
	printf("%d\n", p->data);
	p = GetElem(L, 12);
	printf("%d\n", p->data);
	Insert(L, 11, 0);
	PrintList(L);
	DeleteLNode(L, 1);
	PrintList(L);
	printf("%d\n", ListEmpty(L));
	return 0;
}