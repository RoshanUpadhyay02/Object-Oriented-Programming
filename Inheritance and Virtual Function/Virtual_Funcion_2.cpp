#include <iostream>
using namespace std;

class sample
{
	private:
		int x;
		float y;
	public:
		virtual void display();
		virtual static int sum();	//error
}
int sample::sum()	 
{

}
// virtual function cant be static
