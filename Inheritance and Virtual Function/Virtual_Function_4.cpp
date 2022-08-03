#include <iostream>
using namespace std;

class sample
{
	private:
		int x;
		float y;
	public:
		virtual ~sample();	//invalid
		void display();
		int sum();
};

// destructor can't be virtual

int main()
{
    sample s;

    return 0;
}
