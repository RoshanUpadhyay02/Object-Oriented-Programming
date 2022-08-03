#include <iostream>
using namespace std;

class A
{
	protected:
		int x;
};

class B:public A
{
	public:
		void getX()
		{
			cin>>x;
		}
};

class C
{
	protected:
		int y;
	public:
		void getY()
		{
			cin>>y;
		}
};

class D:public B,public C
{
	public:	
		void sum()
		{
			cout<<x+y;
		}
};

int main()
{
	D ob;
	ob.getX();
	ob.getY();
	ob.sum();

    return 0;
}
