#include <iostream>
using namespace std;

class test
{
    int x,y;
    public:
        static void fan()
        {
            test o;
            cin>>o.x>>o.y;
            cout<<"1st function: "<<o.x+o.y<<endl;

        }
        static void fan(int z)
        {
            test o;
            cin>>o.x>>o.y;
            cout<<"2nd function: "<<o.x+o.y+z<<endl;

        }
};

int main()
{
    test::fan();
    test::fan(10);

    return 0;
}