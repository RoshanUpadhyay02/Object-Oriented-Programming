#include <iostream>
using namespace std;

class Test
{
    public:
        Test() {cout<<"Constructor"<<endl;}
        ~Test() {cout<<"Destructor"<<endl;}
};

int main()
{
    Test ob;
    return 0;
}