//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	int i = 0, ia = 0, ib = 0, s = 1, k = 0,n;
//	int input[100];
//	int output[10000][3];
//	do
//	{
//		scanf("%d", &input[i]);
//		i++;
//	} while (input[i-1]!=250);
//	n = i-1;
//	for (i = 0; i <n-2; i++)
//		for(ia=1+i;ia<n-1;ia++)
//			for (ib = 1+ia; ib < n; ib++)
//			{
//				if (input[i] + input[ia] + input[ib] == 0)
//				{
//					output[k][0] = input[i];
//					output[k][1] = input[ia];
//					output[k][2] = input[ib];
//					k++;
//				}
//			}
//	for (int j = 0; j < k; j++)
//		printf("%d %d %d\n", output[j][0], output[j][1], output[j][2]);
//	return 0;
//
//}