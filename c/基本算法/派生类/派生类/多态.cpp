//#include<iostream>
//using namespace std;
//
//class Point
//{
//    int x, y;
//public:
//    friend istream& operator>>(istream &in,Point& p)
//    {
//        in >> p.x >> p.y;
//        return in;
//    }
//    friend ostream& operator<<(ostream &out,const Point& p)
//    {
//        out << p.x << " " << p.y;
//        return out;
//    }
//    Point operator++()
//    {
//        this->x++;
//        this->y++;
//        return *this;
//    }
//    Point operator++(int)
//    {
//        Point pp;
//        pp.x = this->x;
//        pp.y = this->y;
//        this->x++;
//        this->y++;
//        return pp;
//    }
//    Point operator--()
//    {
//        this->x--;
//        this->y--;
//        return *this;
//    }
//    Point operator--(int)
//    {
//        Point pp = *this;
//        this->x--;
//        this->y--;
//        return pp;
//    }
//};
//
//int main()
//{
//    Point p;
//    cin >> p;
//    cout << p << endl;
//    cout << "使用前自增" << ++p << endl;
//    cout << p << endl;
//    cout << "使用后自增" << p++ << endl;
//    cout << p << endl;
//    cout << "使用前自减" << --p << endl;
//    cout << p << endl;
//    cout << "使用后自减" << p-- << endl;
//    return 0;
//}
//
