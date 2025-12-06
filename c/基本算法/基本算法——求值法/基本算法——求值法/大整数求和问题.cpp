//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//	char a[1000][22], b[1000][21]; 
//	int i = 0, j = 0, s = 0, add = 0,k=0;
//	do
//	{
//		scanf("%s %s", a[i], b[i]);
//		i++;
//	} while (strcmp(a[i-1],"0")||strcmp(b[i-1],"0"));
//	int n = i - 1;
//	for (i = 0; i < n; i++)
//	{
//		int max = strlen(a[i]) > strlen(b[i]) ? strlen(a[i]) : strlen(b[i]);
//		int min = strlen(a[i]) < strlen(b[i]) ? strlen(a[i]) : strlen(b[i]);
//		for (j=max-1,k=0;j>=max-min; j--,k++)
//		{			
//			s = (int)a[i][strlen(a[i])-1-k] + (int)b[i][strlen(b[i])-1-k] + add-96;
//			strlen(a[i]) > strlen(b[i]) ? a[i][j]:b[i][j] = s % 10 + 48;
//			add = s / 10;
//			s = 0;
//		}
//		if (add)
//			strlen(a[i]) > strlen(b[i]) ? a[i][j] : b[i][j] = add+48;
//		printf("%s\n", strlen(a[i]) > strlen(b[i]) ? a[i] : b[i]);
//	}
//	return 0;
//}