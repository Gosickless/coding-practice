#include"HString.h"
#include"Index.h"


extern int next[100];

int main()
{
	char a[] = "abcdefg";
	char b[] = "hijkl";
	char c[] = "def";
	HString T, S1, S2, * Sub;
	InitString(&T);
	InitString(&S1);
	InitString(&S2);
	StrAssign(&S1, a);
	StrAssign(&S2, b);
	ShowString(S1);
	ShowString(S2);
	Concat(&T, S1, S2);
	ShowString(T);
	int cmp = StrCompare(S1, S2);
	printf("%d\n", cmp);
	ClearString(&S1);
	ClearString(&S2);
	Sub = SubString(T, 4, 4);
	ShowString(*Sub);
	HString S;
	InitString(&S);
	StrAssign(&S, c);
	get_next(S, next);
	int index_KMP = Index_KMP(T, S, 1);
	printf("%d\n", index_KMP);
	int index = Index(T, S, 1);
	printf("%d\n", index);

	return 0;
}


