//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//class Shape
//{
//public:
//	Shape(){}
//	virtual float GetArea() { return -1; }
//	virtual void Print(){}
//};
//
//class Rectangle:public Shape
//{
//	float width, length;
//public:
//	Rectangle(float l,float w):width(w),length(l){}
//	float GetArea()
//	{
//		return width * length;
//	}
//	void Print()
//	{
//		cout << "矩形的长为:" << length << endl << "矩形的宽为:" << width << endl << "矩形的面积为:" << GetArea() << endl;
//	}
//	float getlength()
//	{
//		return length;
//	}
//};
//
//class Circle:public Shape
//{
//	float radius;
//public:
//	Circle(float r):radius(r){}
//	float GetArea()
//	{
//		return radius * radius * 3.14159265;
//	}
//	void Print()
//	{
//		cout << "圆的半径为:" << radius << endl << "圆的面积为:" << fixed << setprecision(1) << GetArea() << endl;
//	}
//};
//
//class Square :public Rectangle
//{
//public:
//	Square(float a):Rectangle(a,a){}
//	void Print()
//	{
//		cout << "正方形的半径为:" <<getlength() << endl << "正方形的面积为:" <<GetArea() << endl;
//	}
//};
//
//int main()
//{
//	Shape* sp1, * sp2, * sp3;    
//	sp1 = new Rectangle(3, 4);
//	sp2 = new Circle(5);
//	sp3 = new Square(2);
//	cout << sp1->GetArea() << endl; sp1->Print();
//	cout <<fixed<<setprecision(1) << sp2->GetArea() << endl; sp2->Print();
//	cout <<sp3->GetArea() << endl; sp3->Print();
//	return 0;
//}