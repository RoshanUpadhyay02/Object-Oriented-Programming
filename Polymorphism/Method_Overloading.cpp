#include <iostream>
using namespace std;

class Demo
{
    public:
        void sum(int x,int y)
        {
            cout<<x+y<<endl;
        }
        void sum(int x,int y, int z)
        {
            cout<<x+y+z<<endl;
        }
        void sum(int x,float y)
        {
            cout<<x+y<<endl;
        }
        void sum(float x,int y)
        {
            cout<<x+y<<endl;
        }
};

int main()
{
    Demo ob;
    ob.sum(2,3);
    ob.sum(2,3,4);
    //ob.sum(2,3.5); //error as by default it means double
    //ob.sum(5.5,3);
    ob.sum(2,3.5f);  // f - represents float
    ob.sum(5.5f,3);
    return 0;
}