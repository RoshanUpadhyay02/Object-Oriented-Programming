#include <iostream>
using namespace std;

class Name
{
    public:
        static int i;
        Name(){}
};
int Name::i=1;

int main()
{
    Name ob;
    cout<<ob.i;
    return 0;
}