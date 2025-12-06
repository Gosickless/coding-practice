#include"HString.h"

void InitString(HString* T) 
{
	T->ch = NULL;
	T->length = 0;
}

void StrAssign(HString* T, char* chars)
{
	if (T->ch) free(T->ch);
	int i = 0;
	char* c = chars;
	while (*c)
	{
		i++;
		c++;
	}
	T->length = i;
	if (!T->length) T->ch = NULL;
	else
	{
		if (!(T->ch = (char*)malloc(i * sizeof(char))))
			exit(OVERFLOW);
		for (int j = 0; j < i; j++)
			T->ch[j] = chars[j];
	}
}

int StrLength(HString T)
{
	return T.length;
}

int StrCompare(const HString S, const HString T)
{
	int i = 0;
	while (i < S.length && i < T.length)
		if (S.ch[i++] != T.ch[i++])
			return S.ch[--i] - T.ch[--i];
	return S.length - T.length;
}

void ClearString(HString* T)
{
	if (T->ch)
	{
		free(T->ch);
		T -> ch = NULL;
	}
	T->length = 0;
}

void Concat(HString* T, HString S1, HString S2)
{
	if (T->ch) free(T->ch);
	if (!(T->ch = (char*)malloc((S1.length + S2.length) * sizeof(char))))
		exit(OVERFLOW);
	T->length = S1.length + S2.length;
	for (int i = 0; i < S1.length; i++)
		T->ch[i] = S1.ch[i];
	for (int i = S1.length; i <= T->length - 1; i++)
		T->ch[i] = S2.ch[i - S1.length];
}

HString* SubString(HString T, int pos, int len)
{
	if (pos<1 || pos>T.length || len<0 || len>T.length - pos + 1)
		return NULL;
	HString Sub;
	if (len == 0)
	{
		Sub.ch = NULL;
		Sub.length = 0;
	}
	else
	{
		if (!(Sub.ch = (char*)malloc(len * sizeof(char))))
			exit(OVERFLOW);
		Sub.length = len;
		for (int i = 0; i < len; i++)
			Sub.ch[i] = T.ch[pos - 1 + i];
	}
	return &Sub;
}

void ShowString(HString T)
{
	if (!T.ch) return;
	for (int i = 0; i < StrLength(T); i++)
		printf("%c ", T.ch[i]);
	printf("\n");
}