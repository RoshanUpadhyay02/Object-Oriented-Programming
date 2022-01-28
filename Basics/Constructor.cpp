#include <iostream>
using namespace std;

class Test
{
    //Test(){cout<<"Pricate Constructor"<<endl;}
    friend class B;
    public:
        Test(){cout<<"Default Constructor"<<endl;}
        Test(int x){cout<<"Parametrized Constructor "<<x<<endl;}
        Test(const Test &t){cout<<"Copy Constuctor "<<endl;}
        // Static Constructor not inherited in c++
};

class B
{
    public:
    B(){Test ob; cout<<"B Constructor"<<endl;}
};

int main()
{
    Test ob;
    //Test ob(2);  //parametrized constructor
    //Test ob2 = ob;  //copy constructor
    //B o;    // constructor of class B
    return 0;
}