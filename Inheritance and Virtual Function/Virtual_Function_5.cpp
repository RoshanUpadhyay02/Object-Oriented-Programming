#include <iostream>
using namespace std;

class sample_1
{
	private:
		int x;
		float y;
	public:
		virtual int sum(int x,float y);      //error
};
class sample_2:public sample_1
{
	private:
		int z;
	public:
		virtual float sum(int xx,float yy);
};

// virtual function can't be overloaded

int main()
{
    return 0;
}
