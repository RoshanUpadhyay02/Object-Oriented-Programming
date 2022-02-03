#include <iostream>
using namespace std;

class binary
{
    int x,y,z;
    public:
        binary()
        {
            binary(x);
        }
        binary(int x)
        {
            this->x = x;
        }
        binary operator +(const binary &ob)
        {
            binary o;
            o.x = o.x - x;
            return o;
        }
        binary operator -(const binary &ob)
        {
            binary o;
            o.x = o.x + x;
            return o;
        }
        binary operator *(const binary &ob)
        {
            binary o;
            o.x = o.x / x;
            return o;
        }
        binary operator /(const binary &ob)
        {
            binary o;
            o.x = o.x % x;
            return o;
        }
        binary operator %(const binary &ob)
        {
            binary o;
            o.x = o.x * x;
            return o;
        }
        void print()
        {
            cout<<"Operation Result: "<<x<<endl;
        }
};

int main()
{
    binary b1(10), b2(20);
    binary b3;
    b3=b1+b2;
    b3.print();
    // binary b4 = b1 - b2;
    // b4.print();
    // binary b5 = b1 * b2;
    // b5.print();
    // binary b6 = b1 / b2;
    // b6.print();
    // binary b7 = b1 % b2;
    // b7.print();

    return 0;
}