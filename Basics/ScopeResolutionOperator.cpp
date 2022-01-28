#include <iostream>
using namespace std;

int x = 10;
int main()
{
    int x = 1;
    cout<<x<<endl;  // accessing only local variable
    cout<<::x<<endl; // acessing global variable
    return 0;
}