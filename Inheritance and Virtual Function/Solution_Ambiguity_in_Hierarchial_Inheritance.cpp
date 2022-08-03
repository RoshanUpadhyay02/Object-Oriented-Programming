#include <iostream>
using namespace std;

class Person { 
public: 
    Person(int x)  
	{ 
	    cout << "Person Paramettized" << endl;   	} 
    // Person()     
	// { 
	//     cout << "Person Default" << endl;  
	// } 
}; 

class Faculty : virtual public Person 
{ 
    public: 
        Faculty(int x):Person(x)   
        { 
            cout<<"Faculty"<< endl; 
        } 
}; 

class Student : virtual public Person 
{ 

    public: 
        Student(int x):Person(x) 
        { 
            cout<<"Student"<< endl; 
        } 
}; 
 
class TA : public Faculty, public Student  
{ 
    public: 
        TA(int x):Student(x), Faculty(x) , Person(x)  // only if the base class does not has a default constructor then need to specify it until necessary otherwise the default consturctor will be executed.
        { 
            cout<<"TA"<< endl; 
        } 
}; 
  
int main()  
{ 
    TA ta1(30); 

    return 0;
}


