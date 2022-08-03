#include <iostream>
using namespace std;

class num1
{
    protected:
        int x;
    public:
        void setnum1(int x)
        {
            this->x = x;
        }
};

class num2
{
    protected:
        int y;
    public:
        void setnum2(int y)
        {
            this->y = y;
        }
};

class Sum: public num1, public num2
{
    public:
        void total()
        {
            cout<<"The area of the rectangle is: "<<x+y<<endl;
        }

};

int main()
{
    Sum r;
    r.setnum1(10);
    r.setnum2(20);
    r.total();
    
    return 0;
}