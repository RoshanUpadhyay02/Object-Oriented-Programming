#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i;
    array<int,10> arr = {1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<10;i++)
        cout<<arr.at(i)<<" ";

    return 0;
}