#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"LinkList.h"
#define ERROR -1

#define malloc(x,y) (x*)malloc(sizeof(x)*y)
#define realloc(x,p,n) (x*)realloc(p,n*sizeof(x))

void InitList(LNode** L)
{
	*L = malloc(LNode, 1);
	(*L)->next = NULL;
}

void HeadInsert(LinkList L,elemtype e)
{
	LNode* s = malloc(LNode, 1);
	s->data = e;
	s->next = L->next;
	L->next = s;
}

LNode* TailInsert(LinkList L)
{
	LNode* r = GetElem(L,ListLength(L)), * s;
	elemtype e;
	scanf("%d", &e);
	while (e != 999)
	{
		LNode* s = malloc(LNode, 1);
		s->data = e;
		r->next = s;
		r = s;
		scanf("%d", &e);
	}
	r->next = NULL;
	return L;
}

void PrintList(const LinkList L)
{
	LNode* p = L->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}

int ListLength(const LinkList L)
{
	int length = 0;
	LNode* p = L->next;
	while (p)
	{
		length++;
		p = p->next;
	}
	return length;
}

LNode* LocateElem(const LinkList L, int e)
{
	LNode* p = L->next;
	while (p && p->data != e)
		p = p->next;
	return p;
}

LNode* GetElem(const LinkList L, int i)
{
	LNode* p = L->next;
	if (i == 0)
		return L;
	for (int j = 1; j < i; j++)
		p = p->next;
	return p;
}

void Insert(LinkList L, int i, elemtype e)
{
	if (i == 0)
	{
		printf("Wrong number i.\n");
		return;
	}
	LNode* s = malloc(LNode, 1);
	LNode* p = GetElem(L, i-1);
	s->data = e;
	s->next = p->next;
	p->next = s;
}

void DeleteLNode(LinkList L, int i)
{
	if (i<1 || i>ListLength(L))
	{
		printf("Wrong number i.\n");
		return;
	}
	LNode* p = GetElem(L, i - 1);
	LNode* q = p->next;
	p->next = q->next;
	free(q);
}

int ListEmpty(const LinkList L)
{
	if (!L->next)
		return 1;
	else
		return 0;
}