#include <iostream>
using namespace std;

class line 
{
    public:
    inline float cube(float x) {
            return (x * x * x);
        }
};

int main() 
{
    line obj;
    float val1;
    cout<<"Enter the no.: ";
    cin>>val1;
    cout<<"\nCube value is:"<<obj.cube(val1);

   return 0;
}
