#include <iostream>
using namespace std;

class Test
{
    public:
        void fun(int i)
        {
            cout<<i;
        }
        /*void fun(int &i)
        {
            cout<<i;
        }
        First fun(int) takes one integer argument
        and second function fun(int &)
        takes a reference parameter.
        In this case, compilers do not know which
        function is intended by the user when it is
        called. Because there is no syntactical difference
        in calling the function.
*/

};

int main()
{
    int a=1;
    Test ob;
    ob.fun(a);
    return 0;
}