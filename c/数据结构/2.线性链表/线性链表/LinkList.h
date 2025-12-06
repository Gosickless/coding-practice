#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ERROR -1
#define elemtype int

#ifndef _LinkList_
#define _LinkList_

typedef struct LNode
{
	elemtype data;
	struct LNode* next;
}LNode,*LinkList;

void InitList(LNode** L);

void HeadInsert(LinkList L,elemtype e);

LNode* TailInsert(LinkList L);

void PrintList(const LinkList L);

int ListLength(const LinkList L);

LNode* LocateElem(const LinkList L, int e);

LNode* GetElem(const LinkList L, int i);

void Insert(LinkList L, int i, elemtype e);

void DeleteLNode(LinkList L, int i);

int ListEmpty(const LinkList L);

#endif