//  :: --> scope resolution operator can be used to declare the function outside the class

#include <iostream>
using namespace std;

class College
{
    public:
        void engine();
        void fueltank();
};

void College::engine()
{
    cout<<"Engine Starts"<<endl;
}
void College::fueltank()
{
    cout<<"Fuel Tank is full"<<endl;
}

int main()
{
    College c;
    c.engine();
    c.fueltank();

    return 0;
}