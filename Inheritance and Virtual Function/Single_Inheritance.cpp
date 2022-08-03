#include <iostream>
using namespace std;

class Shape
{
    protected:
        int length,width;
    public:
        void setlength(int w)
        {
            width = w;
        }
        void setwidth(int h)
        {
            length = h;
        }
};

class Rectangle: public Shape
{
    public:
        void area()
        {
            cout<<"The area fo the rectangle is: "<<length*width<<endl;
        }

};

int main()
{
    Rectangle r;
    r.setlength(10);
    r.setwidth(20);
    r.area();
    
    return 0;
}