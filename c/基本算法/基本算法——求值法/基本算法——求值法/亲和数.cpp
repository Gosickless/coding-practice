//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//
//int f(int x,int y)
//{
//	int sum = 1;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (!(x % i))
//			sum += (i + x / i);
//	}
//	if (sum == y)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int n,a,b;
//	int p[100];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		p[i] = (f(a,b) && f(b,a));
//	}
//	for (int i = 0; i < n; i++)
//		printf("%s\n", p[i] ? "Yes" : "No");
//	return 0;
//}
