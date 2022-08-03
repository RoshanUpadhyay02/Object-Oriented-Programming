#include <iostream>
using namespace std;

class sample
{
	private:
		int x;
	public:
		void getdata();
		friend void display(sample abc);
};
void sample::getdata()
{
	cout<<"Enter a value for x: ";
	cin>>x;
}

void display(sample abc)
{
	cout<<"Entered Number is: "<<abc.x<<endl;
}

int main()
{
	sample obj;
	obj.getdata();
	cout<<"Accessing the private data by non - member function"<<endl;
	display(obj);

    return 0;
}
