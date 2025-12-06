//#include<iostream>
//using namespace std;
// 
//class vehicle
//{
//	float MaxSpeed, Weight;
//public:
//	virtual void Run() { cout << "A vehicle is running!" << endl; }
//	virtual void Stop() { cout << "A vehicle has stopped!" << endl; }
//};
//
//class bicycle :virtual public vehicle
//{
//	int height;
//public:
//	virtual void Run() { cout << "A bicycle is running!" << endl; }
//	virtual void Stop() { cout << "A bicycle has stopped!" << endl; }
//};
//
//class motorcar :virtual public vehicle
//{
//	int SeatNum;
//public:
//	virtual void Run() { cout << "A motorcar is running!" << endl; }
//	virtual void Stop() { cout << "A motorcar has stopped!" << endl; }
//};
//
//class motorcycle :public bicycle, public motorcar
//{
//public:
//	virtual void Run() { cout << "A motorcycle is running!" << endl; }
//	virtual void Stop() { cout << "A motorcycle has stopped!" << endl; }
//};
//
//int main()
//{
//	vehicle* ptr;
//	vehicle a;
//	bicycle b;
//	motorcar c;
//	motorcycle d;
//	a.Run();
//	a.Stop();
//	b.Run();
//	b.Stop();
//	c.Run();
//	c.Stop();
//	d.Run();
//	d.Stop();
//	ptr = &a;
//	ptr->Run();
//	ptr = &b;
//	ptr->Run();
//	ptr = &c;
//	ptr->Run();
//	ptr = &d;
//	ptr->Run();
//	return 0;
//}
//
//////#define _CRT_SECURE_NO_WARNINGS 1
//////#include<iostream>
//////#include<cstring>
//////using namespace std;
//////class Date
//////{
//////public:
//////	int y, m, d;
//////public:
//////	Date(int y, int m, int d) :y(y), m(m), d(d) {}
//////	Date(const Date& d) :y(d.y), m(d.m), d(d.d) {}
//////	Date() {}
//////	~Date() {}
//////};
//////class People
//////{
//////	char name[11], number[7], sex, id[16];
//////	Date birthday;
//////public:
//////	People(const char n[11], const char nu[7], char s, const char i[16], int y, int m, int d) :sex(s), birthday(y, m, d)
//////	{
//////		strcpy(name, n);
//////		strcpy(number, nu);
//////		strcpy(id, i);
//////	}
//////	People(const People& p) :sex(p.sex), birthday(p.birthday)
//////	{
//////		strcpy(name, p.name);
//////		strcpy(number, p.number);
//////		strcpy(id, p.id);
//////	}
//////	People() = default;
//////	~People() {}
//////	void set()
//////	{
//////		cout << "Please enter name、number、sex、id、birthday year、month、day:";
//////		cin >> name >> number >> sex >> id >> birthday.y >> birthday.m >> birthday.d;
//////	}
//////	void display()
//////	{
//////		cout << name << " " << number << " " << sex << " " << id << " " << birthday.y << " " << birthday.m << " " << birthday.d << endl;
//////	}
//////	void print()
//////	{
//////		cout << "People" << endl;
//////	}
//////	void print1()
//////	{
//////		cout << "People  1" << endl;
//////	}
//////};
//////
//////class student :virtual public People
//////{
//////	char classNo[7];
//////public:
//////	void print()
//////	{
//////		cout << "student" << endl;
//////	}
//////	void print1()
//////	{
//////		cout << "student  1" << endl;
//////	}
//////};
//////
//////class teacher :virtual public People
//////{
//////	char principalship[11], department[21];
//////public:
//////	void print()
//////	{
//////		cout << "teacher" << endl;
//////	}
//////};
//////
//////class graduate :virtual public student
//////{
//////	char subject[21];
//////	teacher adviser;
//////public:
//////	void print()
//////	{
//////		cout << "graduate" << endl;
//////	}
//////};
//////
//////class TA :public teacher, public graduate
//////{
//////public:
//////	void print()
//////	{
//////		cout << "TA" << endl;
//////	}
//////};
//////
//////int main()
//////{
//////	People a;
//////	student b;
//////	teacher c;
//////	graduate d;
//////	TA e;
//////	a.print();
//////	b.print();
//////	c.print();
//////	d.print();
//////	e.print();
//////	a.print1();
//////	b.print1();
//////	c.print1();
//////	d.print1();
//////	e.print1();
//////	b.People::print1();
//////	c.People::print();
//////	e.graduate::print();
//////	e.student::print();
//////	return 0;
//////}
////
////class Point {
////	float x, y;
////public:
////	Point(float xx, float yy) : x(xx), y(yy) {}
////	float getX() const {
////		return x;
////	}
////	float getY() const {
////		return y;
////	}
////	void setX(float newX) {
////		x = newX;
////	}
////	void setY(float newY) {
////		y = newY;
////	}
////};
////
////class Square : protected Point {
////	float length;
////	double circumference;
////public:
////	Square(float x = 0.0, float y = 0.0, float len = 1.0) : Point(x, y), length(len) {
////		circumference = 4 * length;
////	}
////	float getX() const {
////		return Point::getX();
////	}
////	float getY() const {
////		return Point::getY();
////	}
////	float getLen() const {
////		return length;
////	}
////	double getCircumference() const {
////		return (4 * length);
////	}
////	void moveTo(float newX, float newY) {
////		setX(newX);
////		setY(newY);
////	}
////	double dist(const Square& s) const {
////		double dx = (s.getX() - this->getX()) * (s.getX() - this->getX());
////		double dy = (s.getY() - this->getY()) * (s.getY() - this->getY());
////		return sqrt(dx + dy);
////	}
////
////};