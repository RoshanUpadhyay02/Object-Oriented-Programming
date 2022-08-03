#include <iostream>
using namespace std;

class sample
{
	private:
		int x;
		float y;
	public:
		virtual sample(int x,float y);	//constructor
		void display();
		int sum();
};
// constructor can't be virtual

int main()
{
    sample s;
    return 0;
}