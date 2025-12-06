#include"tree.h"

void CreatTree(BiTree* T)
{
	elemtype node;
	scanf(" %c", &node);
	if (node == '#')
		*T = NULL;
	else
	{
		if(!(*T = malloc(BiTNode, 1)))
			exit(OVERFLOW);
		(*T)->data = node;
		CreatTree(&(*T)->lchild);
		CreatTree(&(*T)->rchild);
	}
}

