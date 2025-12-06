//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//char* stringfanzhuan(char s[],int n)
//{
//	if (n == 1)
//		return s;
//	if(n>strlen(s)/2+strlen(s)%2 + 1)
//		stringfanzhuan(s, n - 1);
//	char t = s[strlen(s) - n];
//	s[strlen(s) - n] = s[n - 1];
//	s[n - 1] = t;
//	return s;
//}
//
//int main()
//{
//	char s[101];
//	scanf("%s", s);
//	int n = strlen(s);
//	printf("%s\n", stringfanzhuan(s, n));
//	return 0;
//}