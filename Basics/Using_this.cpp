#include <iostream>
using namespace std;

class Test
{
    int x,y;
    public:
        Test(int x,int y)
        {
            this->x = x; // gives value to the private variable
            this->y = y;
            cout<<x<<endl;
        }
        void display()
        {
            cout<<x<<y<<endl;
        }
};

int main()
{
    int a=10,b=20;
    Test ob(a,b);
    ob.display();
    return 0;
}