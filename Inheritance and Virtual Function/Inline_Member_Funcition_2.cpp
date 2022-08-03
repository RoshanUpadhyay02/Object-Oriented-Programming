#include <iostream>
using namespace std;

class ForwardReference
{
    int i=1;
    public:

    int f()
    {
        return g()+10;
    }
    int g()
    {
        return i;
    }
};

int main()
{
    ForwardReference fr;
    cout<<fr.f();

    return 0;
}