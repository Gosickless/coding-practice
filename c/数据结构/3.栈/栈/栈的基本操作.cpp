#include"SqStack.h"
#define ERROR -1

#define malloc(x,y) (x*)malloc(sizeof(x)*y)
#define realloc(x,p,n) (x*)realloc(p,n*sizeof(x))

void InitStack(SqStack* S)
{
	S->base = malloc(elemtype, MAX);
	if (!S->base) exit(OVERFLOW);
	S->top = S->base;
	S->stacksize = MAX;
}

int StackEmpty(SqStack S)
{
	if (S.base == S.top)
		return 1;
	else
		return 0;
}

elemtype GetTop(SqStack S)
{
	if (StackEmpty(S)) return ERROR;
	return *(S.top - 1);
}

int StackLength(SqStack S)
{
	return S.top - S.base;
}

void Push(SqStack* S, elemtype e)
{
	if (S->top - S->base >= S->stacksize)
	{
		S->base = realloc(elemtype, S->base, ADD);
		if (!S->base) exit(OVERFLOW);
		S->top = S->base + S->stacksize;
		S->stacksize += ADD;
	}
	*S->top++ = e;
}

void Pop(SqStack* S, elemtype* e)
{
	if (S->top == S->base) return;
	*e = *(--S->top);
}

void StackTraverse(SqStack S)
{
	if (StackEmpty(S))
	{
		printf("No data.\n");
		return;
	}
	elemtype* p = S.base;
	while (p<S.top)
		printf("%d ", *p++);
	printf("\n");
}

void ClearStack(SqStack* S)
{
	S->top = S->base;
}

void DestroyStack(SqStack* S)
{
	free(S->base);
	S->top = S->base = NULL;
	S->stacksize = 0;
}