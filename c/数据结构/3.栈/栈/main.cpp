#include"SqStack.h"

int main()
{
	SqStack S;
	InitStack(&S);
	StackEmpty(S);
	for (int i = 1; i <= 5; i++)
		Push(&S, i);
	int e = GetTop(S);
	printf("%d\n", e);
	int l = StackLength(S);
	printf("%d\n", l);
	Pop(&S, &e);
	e = GetTop(S);
	printf("%d\n", e);
	l = StackLength(S);
	printf("%d\n", l);
	StackTraverse(S);
	ClearStack(&S);
	StackTraverse(S);
	DestroyStack(&S);
	return 0;
}