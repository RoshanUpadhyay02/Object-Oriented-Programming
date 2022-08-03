#include <iostream>
#include <cmath>
using namespace std;

class Point
{
protected:
	float length,breath,side,radius,area,height;
};

class Shape: public Point
{
	public:
		virtual void getdata()=0;
		virtual void display()=0;
};

class Rectangle:public Shape
{
    public:
        void getdata()
        {
            cout<<"Enter the Breadth Value: ";
            cin>>breath;
            cout<<"Enter the Length Value: ";
            cin>>length;
        }
        void display()
        {
            area = length * breath;
            cout<<"The Area of the Rectangle is: "<<area<<endl;
        }
};

class Square:public Shape
{
    public:
    void getdata()
    {
        cout<<"Enter the Value of the Side of the Box: ";
        cin>>side;
    }
    void display()
    {
        area = pow(side,2);
        cout<<"The Area of the Square is: "<<area<<endl;
    }
};

int main()
{
	Shape *s;
	Rectangle r;
	Square t;
	s = &r;
	s->getdata();
	s->display();
	s = &t;
	s->getdata();
	s->display();
}
