#include <iostream> 
using namespace std; 
  
class Base 
{ 
    public: 
    
        // user wants to override this in the derived class 
        virtual void func()  
        { 
            cout << "I am in base" << endl; 
        } 
}; 
  
class derived : public Base 
{ 
    public: 
        // did a mistake by putting   an argument "int a" 
    void func(int a) //override  
        { 
            cout << "I am in derived class" << endl; 
        } 
}; 
  
int main() 
{ 
    Base b; 
    derived d; 
    cout << "Compiled successfully" << endl; 
    return 0; 
} 
