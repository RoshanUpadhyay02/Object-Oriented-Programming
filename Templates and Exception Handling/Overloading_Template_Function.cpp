#include <iostream>
using namespace std;

template <class T>
void display(T x)
{
	cout<<"Template display: "<<x<<endl;
}

void display(int x)
{
	cout<<"Explicit display: "<<x<<endl;
}
int main()
{
	display(100);
	display(12.34);
	display('C');
	
    return 0;
}
