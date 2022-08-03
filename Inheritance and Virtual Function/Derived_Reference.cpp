#include <iostream>
using namespace std;

class Base{
  public:
    void foo()
	{
		cout<<"Base"<<endl;
	}
};

class Derived : public Base
{
  public:
    void foo()
	{
		cout<<"Derived"<<endl;
	}
};

int main()
{
  Derived bar;
  //call Base::foo() from bar here?
  bar.Base::foo(); // using a qualified-id
  bar.Derived::foo();
  return 0;
}
