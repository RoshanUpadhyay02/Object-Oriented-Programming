#include <iostream>
using namespace std;

class A
{
    protected:
        int x;
    public:
        void getdata(int x) 
        {
            this->x = x;
        }
        void display()
        {
            cout<<"Value of x is: "<<x<<endl;
        }
};

class B
{
    protected:
        int y;
    public:
        void getdata(int y) 
        {
            this->y = y;
        }
        
        void display()
        {
            cout<<"Value of y is: "<<y<<endl;
        }
};

class C : public A, public B
{
    public:
        C()
        {
            cout<<"Derived from A and B."<<endl;
        }       
        
};

int main()
{
    C o;
    // o.getdata(5);
    // o.display();
    // o.getdata(10);    Ambiguity due to same name of inherited functions from the two parents
    // o.display();
    o.A::getdata(5);
    o.A::display();
    o.B::getdata(10);    // Using :: - operator to correct the ambiguity
    o.B::display();

    return 0;
}