#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int a[100];
int find(int x) 
{
	if (x == a[x])
	{
		return x;
	}
	else
	{
		a[x] = find(a[x]);
		return a[x];
	}
}

void union_r(int i, int j)
{
	int i_p = find(a[i]);
	int j_p = find(a[j]);
	a[i_p] = j_p;
}

int main() {
	int N, M;
	//printf("Please enter the number of clan and the number of relations:\n");
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; ++i)
	{
		a[i] = i;
	}
	int i, j;
	for (int k = 0; k < M; ++k)
	{
		scanf("%d %d", &i, &j);
		union_r(i, j);
	}
	int num;
	scanf("%d", &num);
	int x, y;
	for (int i = 0; i < num; ++i) 
	{
		scanf("%d %d", &x, &y);
		if (find(x) == find(y)) 
			printf("Yes\n");
		else 
			printf("No\n");
	}
	return 0;
}