#include<iostream>
using namespace std;

class Base 
{
    public:
        void foo()         
        { 
            std::cout << "Base::foo\n"; 
        }
        virtual void bar() 
        { 
            std::cout << "Base::bar\n"; 
        }
};

class Derived : public Base 
{
    public:
        void foo()         
        {    	std::cout << "Derived::foo\n"; 
        }
        void bar() 
        { 
            std::cout << "Derived::bar\n"; 
        }
};

int main() 
{
    Derived d;
    Base* b = &d;
    b->foo(); // calls Base::foo
    b->bar(); // calls Derived::bar
}

