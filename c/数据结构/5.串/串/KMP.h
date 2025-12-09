#include <iostream>

using namespace std;

const int MAX = 1000;
int kmpnext[MAX];



void get_kmpnext(const string& p)
{
	kmpnext[0] = 0;
	for (int i = 1, j = 0; i < p.length(); ++i)
	{
		while (j && p[i] != p[j])
			j = kmpnext[j - 1];
		if (p[i] == p[j])
			j++;
		kmpnext[i] = j;
	}
}

void kmp(const string& s, const string& p)
{
	for (int i = 0, j = 0; i < s.length(); i++)
	{
		while (j && s[i] != p[j])
			j = kmpnext[j - 1];
		if (s[i] == p[j])
			j++;
		if (j == p.length())
		{
			cout << i - j + 2 << endl;
			j = kmpnext[j - 1];
		}
	}
}