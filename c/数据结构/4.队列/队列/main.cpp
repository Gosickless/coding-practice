#include"SqQueue.h"

int main()
{
	SqQueue Q;
	InitQueue(&Q);
	QueueEmpty(Q);
	int l = QueueLength(Q);
	printf("%d\n", l);
	for (int i = 1; i <= 5; i++)
		EnQueue(&Q, i);
	int e=GetHead(Q);
	printf("%d\n", e);
	QueueTraverse(Q);
	DeQueue(&Q, &e);
	printf("%d\n", e);
	printf("%d\n", QueueLength(Q));
	QueueTraverse(Q);
	ClearQueue(&Q);
	DestroyQueue(&Q);
	return 0;
}