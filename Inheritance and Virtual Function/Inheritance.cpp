#include <iostream>
using namespace std;

class Fruits    // Parent or Base or Super Class
{
    protected:
        int pkg, qty;
    public:
        void totalcost()
        {
            cout<<"The Total Cost of apples is: "<<pkg*qty<<endl;
        }
};

class Apple : public Fruits  // Child or Derived or Sub Class
{
    int x,y;
    public:
        void getcost()
        {
            pkg = x;
        }
        void setcost(int x)
        {
            this->x = x;
        }
        void getquantity()
        {
            qty = y;
        }
        void setquantity(int y)
        {
            this->y = y;
        }
};

int main()
{
    Apple ap;
    ap.setcost(10);
    ap.getcost();
    ap.setquantity(5);
    ap.getquantity();
    ap.totalcost();

    return 0;
}