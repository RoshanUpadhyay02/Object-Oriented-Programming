#include <iostream>
using namespace std;

class Student
{
    protected:
        int mark,phone;
        string fname,lname;
};

class Grade:public Student
{
    public:
        Grade(string f,string l,int p,int m)
        {
            fname=f; lname=l; phone=p; mark=m;
        }
        char Calculate()
        {
            if(mark>=90&&mark<=100)
                return 'O';
            else if(mark>=75&&mark<90)
                return 'E';
            else if(mark>=60&&mark<75)
                return 'A';
            else if(mark>=40&&mark<60)
                return 'B';
            else
                return 'D';
        }
        void display()
        {
            cout<<"First Name: "<<fname<<endl;
            cout<<"Last Name: "<<lname<<endl;
            cout<<"Phone: "<<phone<<endl;
            cout<<"Grade: "<<Calculate()<<endl;
        }
};
int main()
{
	int n,p;
    string fn,ln;
	cin>>fn;
    cin>>ln;
    cin>>p;
    cin>>n;
	Grade ob(fn,ln,p,n);
	ob.display();

    return 0;
}
