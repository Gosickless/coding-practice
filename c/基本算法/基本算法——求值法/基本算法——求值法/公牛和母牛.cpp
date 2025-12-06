//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<string.h>
//int main()
//{
//	char a[251], b[251];
//	int c[500] = { 0 }, i = 0, j = 0, sum = 0, k,n,t;
//	scanf("%s %s", a, b);
//	int na = strlen(a);
//	int nb = strlen(b);
//	if (na < nb)
//	{
//		char temp[251];
//		strcpy(temp, a);
//		strcpy(a, b);
//		strcpy(b, temp);
//		na = na + nb;
//		nb = na - nb;
//		na = na - nb;
//	}
//	for (i = 0; i<nb;i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			sum += (a[na - 1 - j] - 48) * (b[nb - 1 - (i - j)] - 48);
//		}
//		k = i;
//		do
//		{
//			n = k;
//			c[k++] += (sum % 10);
//			if (c[k - 1] >= 10)
//			{
//				c[k - 1] %= 10;
//				c[k] += 1;
//				n = k;
//			}
//		} while (sum /= 10);
//	}
//	for (i; i < na; i++)
//	{
//		for (j = 0; j < nb; j++)
//		{
//			sum += (a[na - 1 - i + j] - 48) * (b[nb - 1 - j] - 48);
//		}
//		k = i;
//		do
//		{
//			n = k;
//			c[k++] += (sum % 10);
//			if (c[k - 1] >= 10)
//			{
//				c[k - 1] %= 10;
//				c[k] += 1;
//				n = k;
//			}
//		} while (sum /= 10);
//	}
//	for (i; i < na+nb-1; i++)
//	{
//		for (j=0;j<na+nb-1-i;j++)
//		{
//			sum += (a[j] - 48) * (b[na + nb - 2 - i - j] - 48);
//		}
//		k = i;
//		do
//		{
//			n = k;
//			c[k++] += (sum % 10);
//			if (c[k - 1] >= 10)
//			{
//				c[k - 1] %= 10;
//				c[k] += 1;
//				n = k;
//			}
//		} while (sum /= 10);
//	}
//	for (i = n; i >= 0; i--)
//		printf("%d", c[i]);
//	return 0;
//}


//·¨2
//#include<iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string multiply(string num1, string num2) {
//    int n1 = num1.size();
//    int n2 = num2.size();
//    string res(n1 + n2, '0');
//
//    for (int i = n1 - 1; i >= 0; i--) {
//        for (int j = n2 - 1; j >= 0; j--) {
//            int product = (num1[i] - '0') * (num2[j] - '0') + (res[i + j + 1] - '0');
//            res[i + j + 1] = product % 10 + '0';
//            res[i + j] += product / 10;
//        }
//    }
//
//    for (int i = 0; i < n1 + n2; i++) {
//        if (res[i] != '0') {
//            return res.substr(i);
//        }
//    }
//}
//
//int main() {
//    string a, b, res;
//    cout << "Please enter two large intger:" << endl;
//    cin >> a;
//    cin >> b;
//    res = multiply(a, b);
//    cout << "The result of their product is:" << endl << res;
//}
