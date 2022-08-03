#include <iostream>
using namespace std;

void test(int x) 
{
	try
	{
		if(x == 1) 
			throw x;
			else if(x == 0)
				throw 'c';
				else if(x == -1)
					throw 2.6;
		cout<<"End of Try - Block\n";
	}
	catch(int m)	{
		cout<<"Caught an Integer\n";
	}
	catch(...) 	{
		cout<<"Caught an Exception\n/";
	}
	cout<<"End of try - catch system \n\n";
}

int main()
{
    int x;
    cin>>x;
    test(x);

    return 0;
}
