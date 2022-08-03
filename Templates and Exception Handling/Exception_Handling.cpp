#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b;
    cout<<"Please enter the two numbers: ";
    cin>>a>>b;
    try
    {
        if(b == 0)
            throw ("Division not possible by 0.");

        cout<<fixed<<setprecision(2)<<a/b;
    }
    catch(char *e)
    {
        cout<<e;
    }
}