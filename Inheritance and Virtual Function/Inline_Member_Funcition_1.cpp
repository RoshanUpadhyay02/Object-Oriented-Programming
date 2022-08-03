#include <iostream>
using namespace std;

class Person
{
    private:	
        string firstName="Arun";	
        string lastName="C";
    public:	
        //an inline function	
        string getFirstName()	
        {		
            return firstName;	
        }	
        //declaration of an inline function
        string getLastName();
};
//getLastName is in the same header file with declaration of

//Person class
inline string Person::getLastName()
{
    return lastName;
}

int main()
{
    Person p;
    cout<<p.getFirstName()<<" "<<p.getLastName()<<endl;

    return 0;
}