#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"List.h"

int main()
{
	SqList L;
	InitList(&L);
	if (ListEmpty(L))
		CreatList(&L);
	printf("%d\n", ListLength(L));
	ShowList(L);
	ListInsert(&L, 2, 520);
	ShowList(L);
	int x = 0;
	int* e = &x;
	ListDelete(&L, 2, e);
	printf("%d\n", *e);
	GetElem(L, 2, e);
	printf("%d\n", *e);
	ShowList(L);
	int i=LocateElem(L, 4);
	printf("%d\n", i);
	ClearList(&L);
	DestroyList(&L);
	return 0;
}