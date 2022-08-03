#include <iostream>
using namespace std;

class WithFriend
{
    int i;
    public:
        friend void fun();
};

void fun()
{
    WithFriend wf;
    wf.i=10;
    cout<<wf.i;
}


int main()
{
    fun();

    return 0;
}