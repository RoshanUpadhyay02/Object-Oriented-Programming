#include <iostream>
using namespace std;

class sample
{
	private:
		int x;
		float y;
	public:
		virtual void display();
		virtual int sum();
}
virtual void sample::display()	//Error
{
}
// can't use virtual outside the class