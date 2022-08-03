#include <iostream>
using namespace std;

template <class T>
class sample
{
	private:
		T value,value1,value2;
	public:
		void getdata()
        {
            cin>>value1>>value2;
        }
		void sum()
        {
            // value = value1+value2;
            cout<<"Sum is: "<<value1<<value2;
        }
};
int main()
{
	// sample <int> obj1;
	// sample <float> obj2;
    sample <char> obj1;
    sample <char> obj2;
	cout<<"Enter any two Integers: ";
	obj1.getdata();
	obj1.sum();

    return 0;
}
