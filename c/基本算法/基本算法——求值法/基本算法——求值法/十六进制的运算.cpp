//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
// 
//int change(char c)
//{
//	switch (c)
//	{
//	case 'a':
//	case 'A':
//		return 10;
//	case 'b':
//	case 'B':
//		return 11;
//	case 'c':
//	case 'C':
//		return 12;
//	case 'd':
//	case 'D':
//		return 13;
//	case 'e':
//	case 'E':
//		return 14;
//	case 'f':
//	case 'F':
//		return 15;
//	}
//}
//
//void print(int x)
//{
//	if (x)
//	{
//		int s = x;
//		print(x/8);
//		printf("%d", s % 8);
//	}
//	else
//		return;
//}
//
//int main()
//{
//	int t, j = 0,  n1 = 0, n2 = 0;
//	int sum[100] = { 0 };
//	char c[100][12];
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%s", c[i]);
//		while (c[i][j] != '+' && c[i][j] != '-')
//			j++;
//		n1 = j;
//		n2 = strlen(c[i]) - 1 - n1;
//		for (j = 0; j < n1; j++)
//		{
//			if(c[i][j]>='0'&&c[i][j]<='9')
//				sum[i] += ((c[i][j] - '0') * pow(16, n1 - 1 - j));
//			else
//				sum[i] += (change(c[i][j]) * pow(16, n1 - 1 - j));
//		}
//		if (c[i][n1] == '+')
//		{
//			for (j = 0; j < n2; j++)
//			{
//				if (c[i][n1 + 1 + j] >= '0' && c[i][n1 + 1 + j] <= '9')
//					sum[i] += ((c[i][n1 + 1 + j] - '0') * pow(16, n2 - 1 - j));
//				else
//					sum[i] += (change(c[i][n1 + 1 + j]) * pow(16, n2 - 1 - j));
//			}
//		}
//		else
//		{
//			for (j = 0; j < n2; j++)
//			{
//				if (c[i][n1 + 1 + j] >= '0' && c[i][n1 + 1 + j] <= '9')
//					sum[i] -= ((c[i][n1 + 1 + j] - '0') * pow(16, n2 - 1 - j));
//				else
//					sum[i] -= (change(c[i][n1 + 1 + j]) * pow(16, n2 - 1 - j));
//			}
//		}
//	}
//	for (int i = 0; i < t; i++)
//	{
//		print(sum[i]);
//		printf("\n");
//	}
//		return 0;
//}