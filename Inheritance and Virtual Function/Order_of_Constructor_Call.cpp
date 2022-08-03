#include <iostream>
using namespace std;

class Base
{ 
    int x;
    public:
        Base() 
        { 
            cout<<"Base default constructor"<<endl; 
        }
};

class Derived : public Base
{ 
    int y;
    public:
        Derived()
        { 
            cout<<"Derived def. constructor"<<endl; 
        }
        // parameterized constructor
        Derived(int i)
        { 
            cout << "Derived parameterized constructor\n"<<endl; 
        }
};

int main()
{
    Base b;
    cout<<"\n"<<endl;  
    Derived d1;   
    cout<<"\n"<<endl; 
    Derived d2(10);
}
