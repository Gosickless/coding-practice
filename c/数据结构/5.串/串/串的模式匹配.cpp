#include"HString.h"


//typedef int next[100];
// next* get_next(HString S)//int (*get_next(HString S))[100]//二者等价
int next[100];

void get_next(HString S,int next[])
{
	int i = 0;
	int j = -1;
	next[0] = -1;
	while (i < S.length - 1)
	{
		if (j == -1 || S.ch[i] == S.ch[j])
		{
			j++;
			i++;
			next[i] = (S.ch[i] != S.ch[j] ? j : next[j]);//若第i个字符与j个字符相同，则可直接前移至next[j]位置处比较，这种改进效率更高
		}
		else
		{
			j = next[j];
		}
	}
}


int Index_KMP(HString T, HString S, int pos)
{
	int i = pos - 1;
	int j = 0;
	while (i < T.length && j < S.length)
	{
		if (j==-1||T.ch[i] == S.ch[j])
		{
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if (j >= S.length)
		return i - S.length + 1;
	else
		return 0;
}

int Index(HString T, HString S, int pos)
{
	int i = pos - 1;
	int j = 0;
	while (i < T.length && j < S.length)
	{
		if (S.ch[j] == T.ch[i])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= S.length)
		return i - S.length + 1;
	else
		return 0;
}
