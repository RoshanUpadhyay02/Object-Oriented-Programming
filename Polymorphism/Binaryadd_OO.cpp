#include <iostream>
using namespace std;

class complex
{
    private:
        int r,i;
    public:
        complex()
        {
            complex(r,i);
        }
        complex(int r, int i)
        {
            this->r = r;
            this->i = i;
        }
        complex operator +(complex const &ob)
        {
            complex o;
            o.r = r + ob.r;
            // o.i = i + ob.i;
            return o;
        }
        void print()
        {
            cout<<r<<" + i"<<i<<endl;
        }
};

int main()
{
    complex c1(10,20), c2(30,40);
    complex c3 = c1 + c2;
    c3.print();

}