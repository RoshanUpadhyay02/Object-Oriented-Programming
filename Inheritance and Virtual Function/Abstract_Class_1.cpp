#include <iostream>
using namespace std;

//Abstract base class
class Base          
{
    public:
    virtual void show() = 0;    // Pure Virtual Function
};

class Derived:public Base
{
    public:
    void show()
    { 
        cout << "Implementation of Virtual Function in Derived class\n"; 
    }
};

int main()
{
    //Base obj;   //Compile Time Error  -- object of abstract class type "Base" is not allowed
    Base *b;
    Derived d;
    b = &d;
    b->show();
}
