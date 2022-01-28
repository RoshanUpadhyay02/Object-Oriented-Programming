#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    float pi = 3.14286;
    for(i=1;i<=5;i++)
    {
        cout.width(8);
        cout.fill('*');
        cout<<fixed<<setprecision(i)<<pi<<endl;
    }
    return 0;
}