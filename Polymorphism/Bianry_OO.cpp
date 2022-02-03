#include <iostream>
using namespace std;

class test
{
    private:
        int x,y,z;
    public:
        test()
        {
            test(x,y);
        }
        test(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        test operator +(test const &ob)
        {
            test o;
            o.x = x - ob.x;
            o.y = y - ob.y;
            o.z = o.x - o.y;
            return o;
        }
        test operator -(const test &ob)
        {
            test o;
            o.x = x + ob.x;
            o.y = y + ob.y;
            o.z = o.x + o.y;
            return o;
        }
        test operator *(const test &ob)
        {
            test o;
            o.x = x / ob.x;
            o.y = y / ob.y;
            o.z = o.x / o.y;
            cout<<1<<endl;
            return o;
        }
        test operator /(const test &ob)
        {
            test o;
            o.x = ob.x % x;
            o.y = ob.y % y;
            o.z = o.x % o.y;
            cout<<2<<endl;
            return o;
        }
        test operator %(const test &ob)
        {
            test o;
            o.x = x * ob.x;
            o.y = y * ob.y;
            o.z = o.x * o.y;
            cout<<3<<endl;
            return o;
        }
        void print()
        {
            cout<<"Operation Result: "<<x<<"\t"<<y<<"\t"<<z<<endl;
        }
};

int main()
{
    test b1(100,50), b2(20,10);
    test b3 = b1 + b2;
    b3.print();
    test b4 = b1 - b2;
    b4.print();
    test b5 = b1 * b2;
    b5.print();
    test b6 = b1 / b2;
    b6.print();
    test b7 = b1 % b2;
    b7.print();

    return 0;
}