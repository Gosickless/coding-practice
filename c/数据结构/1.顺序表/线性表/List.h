#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#ifndef _List_
#define _List_

#define MAXSIZE 100
#define ADDSIZE 10

//下面定义不同数据类型elemtype,可随时替换(初始为int)
#define elemtype int

typedef struct SqList
{
	elemtype* elem;
	int length;
	int listsize;
}SqList;

//下面为各种操作函数声明
int InitList(SqList* L);//初始化

int ListEmpty(SqList L);//判空

void CreatList(SqList* L);//创建表

int ListLength(SqList L);//求表长

void ShowList(const SqList L);//显示表

int ListInsert(SqList* L, int i, elemtype e);//插入元素

int ListDelete(SqList* L, int i,elemtype* e);//删除元素

int GetElem(SqList L, int i, elemtype* e);//返回元素

int LocateElem(SqList L, elemtype e);//定位

void ClearList(SqList* L);//清空表

void DestroyList(SqList* L);//销毁表

#endif