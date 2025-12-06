//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#define mmalloc(x,y) (x*)malloc(sizeof(x)*y)
//
//void p(char src[], char arr[], int start, int end, int index, int n)
//{
//	if (index == n)
//	{
//		for (int i = 0; i < n; i++)
//			printf("%d ", arr[i]);
//		printf("\n");
//		return;
//	}
//	for (int i = start; i <= end; i++)
//	{
//		arr[index] = src[i];
//		p(src, arr, i + 1, end, index + 1, n);
//	}
//}
//
//int main()
//{
//	int m, n;
//	char* src = mmalloc(char,20);
//	char* arr = mmalloc(char, 20);
//	scanf("%d%d", &m, &n);
//	for (int i = 0; i < m; i++)
//		src[i] = i + 1;
//	p(src, arr, 0, m - 1, 0, n);
//	return 0;
//}