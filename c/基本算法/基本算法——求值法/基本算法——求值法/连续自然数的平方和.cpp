//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n, i,j, sa,sb;
//	scanf("%d", &n);
//	for (i = 0;; i++)
//	{
//		for (j = 0,sa=0,sb=0; j < n+1; j++)
//		{
//			sa += ((i + j) * (i + j));
//			sb += ((i + n + 1 + j) * (i + n + 1 + j));
//		}
//		sb -= (i + 2 * n + 1) * (i + 2 * n + 1);
//		if (sa == sb)
//		{
//			for (j = 0; j < 2 * n + 1; j++)
//				printf("%d ", i + j);
//			break;
//		}
//		else if (sa > sb)
//		{
//			printf("NO");
//			break;
//		}
//	}
//	return 0;
//}