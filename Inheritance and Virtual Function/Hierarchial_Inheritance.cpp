#include <iostream>
using namespace std;

class Operations
{
    protected:
        int x,y;
    public:
        void setdata(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
};

class Add : public Operations
{
    public:
        void sum()
        {
            cout<<"Sum: "<<x+y<<endl;
        }

};

class Subtract : public Operations
{
    public:
        void sub()
        {
            cout<<"Difference: "<<x-y<<endl;
        }

};

int main()
{
    Add a;
    a.setdata(3,5);
    a.sum();
    Subtract s;
    s.setdata(6,1);
    s.sub();

    return 0;
}