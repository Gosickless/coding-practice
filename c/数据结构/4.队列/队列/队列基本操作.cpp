#include"SqQueue.h"

#define malloc(x,y) (x*)malloc(sizeof(x)*y)
#define realloc(x,p,n) (x*)realloc(p,n*sizeof(x))

void InitQueue(SqQueue* Q)
{
	Q->base = malloc(elemtype, MAX);
	if (!Q->base) exit(OVERFLOW);
	Q->front = Q->rear = 0;
}

int QueueEmpty(SqQueue Q)
{
	return Q.front == Q.rear ? 1 : 0;
}

int QueueLength(SqQueue Q)
{
	return (Q.rear - Q.front + MAX) % MAX;
}

elemtype GetHead(SqQueue Q)
{
	if (Q.front == Q.rear == 0) return -1;
	return Q.base[Q.front];
}

void EnQueue(SqQueue* Q,elemtype e)
{
	if (Q->front == (Q->rear + 1) % MAX)
	{
		printf("ERROR!\n");
		return;
	}
	Q->base[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAX;
}

void DeQueue(SqQueue* Q, elemtype* e)
{
	if (QueueEmpty(*Q))
	{
		printf("ERROR!\n");
		return;
	}
	*e = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAX;
}

void QueueTraverse(SqQueue Q)
{
	int i = Q.front;
	while (Q.front != Q.rear && (i + MAX) % MAX!=Q.rear)
	{
		printf("%d ", Q.base[i]);
		i++;
	}
	printf("\n");
}

void ClearQueue(SqQueue* Q)
{
	Q->front = Q->rear = 0;
}

void DestroyQueue(SqQueue* Q)
{
	if (Q->base)
		free(Q->base);
	Q->base = NULL;
	Q->front = Q->rear = 0;
}