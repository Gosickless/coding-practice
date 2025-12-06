#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n, x;
	double   r[21], a[21];
	scanf("%d", &n);
	r[1] = 0, r[2] = 1, a[1] = 1, a[2] = 2;
	for (int i = 3; i <= 20; i++)
	{
		r[i] = (i - 1) * (r[i - 1] + r[i - 2]);
		a[i] = i * a[i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		printf("%.2lf%%\n", (r[x]/a[x]) * 100);
	}
	return 0;
}
