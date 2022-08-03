#include <iostream>
using namespace std;

int main()
{
    int ex;
    cout<<"Value: ";
    cin>>ex;
    cout<<"The value of the unit step function is: ";
    try 
    {
        if (ex > 0)
            throw 0;
        else
            throw 'e';
    } 
    catch (int ex)
    {
        cout << "1";
    } 
    catch (char ex)
    {
        cout<<"0";
    }      
}
