#include <iostream>
using namespace std;

class first
{
	friend class second;
	private:
		int x;
	public:
		void getdata();
};

class second
{
	public:
		void disp(first temp);
};

void first::getdata()
{
	cout<<"Enter a Number: ";
	cin>>x;
}

void second::disp(first temp)
{
	cout<<"Entered Number is: "<<temp.x<<endl;
}

int main()
{

	first objx;
	second objy;
	objx.getdata();
	objy.disp(objx);

    return 0;
}
