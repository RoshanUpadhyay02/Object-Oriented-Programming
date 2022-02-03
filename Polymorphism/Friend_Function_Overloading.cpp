#include <iostream>
using namespace std;

class Student
{
    int x=0,y;
    public:
        friend void marks();
        friend void marks(Student o);
        friend void marks(Student o, Student ob);
};

void marks()
{
    cout<<"Marks()"<<endl;
    Student ob;
    cout<<"Marks are: "<<ob.x<<endl;
}
void marks(Student o)
{
    cout<<"Marks(Student o)"<<endl;
    cin>>o.x>>o.y;
    cout<<"Marks are: "<<o.x+o.y<<endl;
}
void marks(Student o, Student ob)
{
    cout<<"Marks(Student o, Student ob)"<<endl;
    cin>>ob.x>>ob.y;
    o.x = 10;
    o.y = 20;
    cout<<"Marks are: "<<o.x+o.y+ob.x+ob.y<<endl;
}


int main()
{
    Student obj;
    marks();
    marks(obj);
    marks(obj,obj);

    return 0;
}