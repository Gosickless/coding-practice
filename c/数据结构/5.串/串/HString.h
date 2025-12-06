#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ERROR -1

typedef struct HString
{
	char* ch;
	int length;
}HString;

void InitString(HString* T);

void StrAssign(HString* T, char* chars);

int StrLength(HString T);

int StrCompare(const HString S, const HString T);

void ClearString(HString* T);

void Concat(HString* T, HString S1, HString S2);

HString* SubString(HString T, int pos, int len);

void ShowString(HString T);

