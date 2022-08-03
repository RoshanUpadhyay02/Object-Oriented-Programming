#include <iostream>
using namespace std;

template <class T1, class T2>

void display(T1 x,T2 y)
{
	cout<<x<<" "<<y<<endl;
}

int main()
{
	display(1999,"Sakthi");
	display(12.34,1234);

    return 0;
}
