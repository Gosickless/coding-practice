//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int maxnum(double a[],int n)
//{
//	int max = a[0];
//	if (n == 1)
//		return a[0];
//	max = maxnum(a, n - 1);
//	if (max < a[n - 1])
//		max = a[n - 1];
//	return max;
//}
//
//int main()
//{
//	int n;
//	double a[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//		scanf("%lf", &a[i]);
//	printf("%.2lf\n", maxnum(a, n));
//	return 0;
//}