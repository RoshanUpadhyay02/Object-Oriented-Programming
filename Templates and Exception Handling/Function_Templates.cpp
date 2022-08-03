#include<iostream>
using namespace std;

//FUNCTION TEMPLATE
template <class T>
T swap_numbers(T& x,T& y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
	return(0);
}

int main()
{
	int x,y;
	float a,b;
	cout<<"Enter the Two Integers: ";
	cin>>x>>y;

    swap_numbers(x,y);
    
	cout<<"Enter the Two Float Values: ";
	cin>>a>>b;

	swap_numbers(a,b);

	cout<<"\nAfter Swapping Integer Values: "<<x<<" "<<y<<endl;
	cout<<"\nAfter Swapping Float Values: "<<a<<" "<<b<<endl;
	
    return 0;
}
