#include <iostream>
using namespace std;

class Vehicle
{
    public:
        Vehicle()
        {

            cout<<"It makes the work of the people easier"<<endl;
        }
        void setwheels(int);
};

class FourWheeler : public Vehicle
{
    public:
        FourWheeler()
        {
            cout<<"These Vehicles have 4 wheels."<<endl;
        }
};

class Car : public FourWheeler
{
    public:
        Car()
        {
            cout<<"Car has 4 wheels so it is a fourwheeler."<<endl;
        }
};

int main()
{
    Car obj;

    return 0;
}