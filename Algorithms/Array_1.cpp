#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,10> arr = {1,2,3,4,5,6,7,8,9,10};
    cout<<arr.at(3)<<endl;
    cout<<arr.at(6)<<endl;

    return 0;
}