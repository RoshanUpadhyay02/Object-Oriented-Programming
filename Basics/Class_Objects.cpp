#include <iostream>
using namespace std;

class Student  // class
{
    public:
    int rollno;
    string name;
    void getdata(int x,string y)
    {
        rollno = x;
        name = y;
    }
    void display()
    {
        cout<<rollno<<"  "<<name<<endl;
    }
};

int main()
{
    int x;
    string y;
    cin>>x;
    cin>>y;
    Student ob;  // creating object
    ob.getdata(x,y);
    ob.display();
    return 0;
}