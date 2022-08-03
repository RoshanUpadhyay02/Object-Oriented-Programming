#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet,inches;
    public:
        void readDistance(void)
        {
            cout << "Enter feet: ";
            cin >>feet;
            cout << "Enter inches: ";
            cin >>inches;
        }
        void dispDistance(void)
        {
            cout << "Feet:" << feet << "\t" << "Inches:" << inches << endl;
        }
        Distance operator+(Distance &dist1)
        {
            Distance tempD;     //to add two distances
            tempD.inches = inches + dist1.inches;
            tempD.feet = feet   + dist1.feet + (tempD.inches/12);
            tempD.inches = tempD.inches%12;
            return tempD;
        }
};
int main()
{
    Distance D1,D2,D3;
    D1.readDistance();
    D2.readDistance();
    D3=D1+D2;
    D3.dispDistance();
    cout << endl;
    return 0;
}
