#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAXSIZE 1250

typedef int elemtype;

typedef struct Triple
{
	int i, j;//非零元的行、列下标
	elemtype e;
}Triple;

typedef struct TSMatrix
{
	Triple data[MAXSIZE + 1];//非零元三元组表
	int mu, nu, tu;//矩阵的行数、列数、非零元个数
}TSMatrix;

void InitMatrix(TSMatrix* M);

void CreatMatrix(TSMatrix* M);

int need_row_sort(TSMatrix M);

int need_cow_sort(TSMatrix M);

void swap_data(Triple* x, Triple* y);

void SortByRow(TSMatrix* M);

void SortByCow(TSMatrix* M);

void Display(TSMatrix M);

void AddMatrix(TSMatrix* M, TSMatrix* N, TSMatrix* O, int a , int b );

void TransposeMatrix(TSMatrix M, TSMatrix* T);

void DestroyMatrix(TSMatrix* M);

void First_Row(TSMatrix M, int first[]);

void First_Cow(TSMatrix M, int first[]);

void MultiplyMatrix(TSMatrix M, TSMatrix N, TSMatrix* O);

