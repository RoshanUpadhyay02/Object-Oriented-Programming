#include <iostream>
using namespace std;

class Person 
{ 
	public: 
		Person(int x)  
		{ 
			cout<<"Person Parametrized"<<endl;
		}
		Person()     
		{ 
			cout<<"Person Default"<<endl;  
		} 
}; 

class Faculty : public Person 
{ 
	public: 
		// Faculty(int x)   
		// { 
		// 	cout<<"Faculty::Faculty(int ) called"<< endl; 
		// }
		Faculty(int x) : Person(x)   
		{ 
			cout<<"Faculty"<< endl; 
		} 
};

class Student : public Person 
{
	public: 
		// Student(int x)
		// { 
		// 	cout<<"Student::Student(int ) called"<< endl; 
		// } 
		Student(int x) : Person(x) 
		{ 
			cout<<"Student"<< endl; 
		} 
}; 
 
class TA : public Faculty, public Student  
{ 
	public: 
		// TA(int x)								Ambiguity becasue not specified to pass the values to the constructor of the base class
		// { 
		// 	cout<<"TA::TA(int ) called"<< endl; 
		// } 
		TA(int x) : Student(x), Faculty(x)
		{ 
			cout<<"TA"<< endl; 
		} 
}; 
  
int main()  
{ 
    TA ta1(30);

	return 0; 
}
