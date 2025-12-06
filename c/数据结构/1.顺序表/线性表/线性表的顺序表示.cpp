#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"List.h"
#define ERROR -1

#define malloc(x,y) (x*)malloc(sizeof(x)*y)
#define realloc(x,p,n) (x*)realloc(p,n*sizeof(x))

int InitList(SqList* L)//初始化
{
	L->elem = malloc(elemtype, MAXSIZE);
	if (!L->elem) exit(OVERFLOW);
	L->length = 0;
	L->listsize = MAXSIZE;
	return 0;
}

int ListEmpty(SqList L)//判空
{
	if (L.length == 0) return 1;
	else return 0;
}

void CreatList(SqList* L)//创建表
{
	int n;
	printf("%Please input the number SqList has: ");
	scanf("%d", &n);
	printf("Please input those numbers: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &L->elem[i]);
	L->length = n;
}

int ListLength(SqList L)//求表长
{
	return L.length;
}

void ShowList(const SqList L)//显示表
{
	printf("The elem of SqList are: ");
	for (int i = 0; i < L.length; i++)
		printf("%d ", L.elem[i]);
	printf("\n");
}

int ListInsert(SqList* L, int i, elemtype e)//插入元素
{
	if (i > L->length + 1 || i < 1) return OVERFLOW;
	if (L->length >= L->listsize)
	{
		elemtype* newbase = realloc(elemtype, L->elem, L->listsize + ADDSIZE);
		if (!newbase) exit(OVERFLOW);
		L->elem = newbase;
		L->listsize += ADDSIZE;
	}
	for (int j = L->length - 1; j >= i - 1; j--)
		L->elem[j + 1] = L->elem[j];
	L->elem[i - 1] = e;
	++L->length;
	return 0;
}

int ListDelete(SqList* L, int i, elemtype* e)//删除元素
{
	if (i > L->length || i < 1) return OVERFLOW;
	if (ListEmpty(*L))
	{
		printf("No data.\n");
		return 0;
	}
	*e = L->elem[i - 1];
	for (int j = i - 1; j < L->length - 1; j++)
		L->elem[j] = L->elem[j + 1];
	--L->length;
	return 0;
}

int GetElem(SqList L, int i, elemtype* e)//返回元素
{
	if (i > L.length || i < 1) return OVERFLOW;
	*e = L.elem[i - 1];
	return 0;
}

int LocateElem(SqList L, elemtype e)//定位
{
	for (int i = 0; i < L.length; i++)
		if (L.elem[i] == e)
			return i + 1;
	return 0;
}

void ClearList(SqList* L)//清空表
{
	L->length = 0;
}


void DestroyList(SqList* L)//销毁表
{
	if (L->elem)
	{
		free(L->elem);
		L->elem = NULL;
	}
}

