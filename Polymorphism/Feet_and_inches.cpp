#include <iostream>
using namespace std;

class height
{
    int feet,inch;
    public:
        height()
        {
            height(feet,inch);
        }
        height(int x, int y)
        {
            feet = x;
            inch = y;
        }
        void convert()
        {
            feet = feet*12 + inch;
        }
        // height operator +(const height &h)
        // {
        //     height h1;
        //     h1.feet  = h.feet + feet; 
        //     return h1;
        // }
        friend height operator +(const height &h,const height &h1);
        void print()
        {
            //int x = feet/12, y = feet%12;
            //cout<<x<<"'"<<y<<endl;
            cout<<feet<<"'"<<inch<<endl;
        }
};

height operator +(const height &h,const height &h1)
{
        height h2;
        h2.feet = h.feet + h1.feet; 
        h2.inch = h.inch + h1.inch;
        if(h2.inch > 11)
        {
            h2.feet++;
            h2.inch = h2.inch - 12;
        }
        return h2;
}

int main()
{
    height th(6,3),th1(5,10);
    // th.convert();
    // th1.convert();
    height th2 = th + th1;
    th2.print();

    return 0;    
}