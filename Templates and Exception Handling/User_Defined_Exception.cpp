#include <iostream> 
using namespace std;

class MyException : public exception
{  
    public:  
        const char * what() const throw()  
        {  
            return "Attempted to divide by zero!\n";  
        }  
};  

int main()  
{  
    try  
    {  
        double x, y;  
        cout << "Enter the two numbers : ";  
        cin >> x >> y;  
        if (y == 0)
        {  
            MyException z;  
            throw z;  
        }
        cout<<x/y;
    } 
    catch(exception& e)       
    {  
        cout << e.what();  
    }   

    return 0;
} 
