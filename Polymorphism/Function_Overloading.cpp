#include <iostream>
using namespace std;

class Test
{
    public:
        void fun(int i)  
        { 
           cout<<i;
        }
	    /*void fun(int i, int j=8) 
        {
            cout<<i<<j;
        }
        This is error as the second
        function is the function with
        default argument so they are actually
        function with one argument.*/

};

int main()
{
    Test ob;
    ob.fun(1);
    return 0;
}