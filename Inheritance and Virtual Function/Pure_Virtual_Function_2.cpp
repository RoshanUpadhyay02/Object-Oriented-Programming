#include <iostream>
using namespace std;
class Base
{
    public:
        virtual void display()=0;
};

void Base::display()
{
    cout<<"Base class version of pure virtual";
}

class Derived:public Base
{    
	public:
	    void display()
	    {            
	        cout<<"Derived Version of pure virtual function";        
		}
};
int main() 
{	
	Derived ob;
	Base *p;
	p = &ob;
	p->display();
	return 0;
}
