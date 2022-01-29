#include <iostream>
using namespace std;

class Student
{
    private:
        Student(char n)  // Private Constructor
        {
            name = "Raman";
            cout<<"Private Constructor  "<<"Name: "<<name<<"\t"<<"Roll No: "<<n<<endl;
        }
    protected:
        int rollno;
        string name;
    public:
        Student()  // Default Constructor
        {
            rollno = 12;
            name = "Tina";
            cout<<"Default Constructor   "<<"Name: "<<name<<"\t"<<"Roll No: "<<rollno<<endl;
        }
        Student(int x)  // Parametrized Constructor
        {
            rollno = x;
            name = "Rahul";
            cout<<"Parametrized Constructor  "<<"Name: "<<name<<"\t"<<"Roll No: "<<rollno<<endl;
        }
        Student(const Student &ob)  // Copy Constructor
        {
            rollno = ob.rollno;
            name = ob.name;
            cout<<"Copy Constructor   "<<"Name: "<<name<<"\t"<<"Roll No: "<<rollno<<endl;
        }
        friend void hello();
};

void hello()
{
    Student('H');
}

int main()
{
    Student st;
    Student st1(5);
    Student st2 = st1;
    hello();

    return 0;
}