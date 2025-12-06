#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
using namespace std;
class date
{
public:
	int y, m, d;
public:
	date(int y, int m, int d) :y(y), m(m), d(d) {}
	date(const date& d) :y(d.y), m(d.m), d(d.d) {}
	date() {}
	~date() {}
	void setdate(date& d)
	{
		this->d = d.d;
		this->m = d.m;
		this->y = d.y;
	}
	void showdate()
	{
		cout << y << "-" << m << "-" << d;
	}
};
class People
{
	char name[11], sex, id[16];
	date birthday;
public:
	People(const char n[11],  char s, date b ,const char i[16]) :sex(s), birthday(b)
	{
		strcpy(name, n);
		strcpy(id, i);
	}
	People(const People& p) :sex(p.sex), birthday(p.birthday)
	{
		strcpy(name, p.name);
		strcpy(id, p.id);
	}
	People() = default;
	~People() {}
	void show()
	{
		cout << "姓名：" << name << "  性别：" << sex << "  出生日期：";
		birthday.showdate();
		cout << " ID：" << id << endl;
	}
	People operator=(People &p)
	{
		strcpy(this->name, p.name);
		strcpy(this->id, p.id);
		this->sex = p.sex;
		this->birthday.setdate(p.birthday);
		return *this;
	}
	int operator==(People& p)
	{
		if (!strcmp(this->id,p.id))
			return 1;
		else return 0;
	}
};
int main()
{
	date birthday(2010, 11, 12);
	char name[11] = "张三";
	char sex = 'm';
	char id[16] = "32122300";
	People p1(name, sex, birthday, id);
	cout << "p1：";
	p1.show();
	date birthday2(2010, 11, 14);
	char name2[11] = "李四";
	char sex2 = 'm';
	char id2[16] = "32122301";
	People p2(name2, sex2, birthday2, id2);
	cout << "p2：";
	p2.show();
	if (p1 == p2)
	{
		cout << "p1与p2ID相同" << endl;
	}
	else
	{
		cout << "p1与p2ID不同" << endl;
	}
	People p3;
	p3 = p1;
	cout << "p3：";
	p3.show();
	if (p1 == p3)
	{
		cout << "p1与p3ID相同" << endl;
	}
	else
	{
		cout << "p1与p3ID不相同" << endl;
	}
	getchar();
	return 0;
}

