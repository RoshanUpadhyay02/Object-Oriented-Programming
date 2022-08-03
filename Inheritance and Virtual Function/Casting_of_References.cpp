#include <iostream>
using namespace std;

class Super
{ 
    int x;
    public:
        Super() 
        { 
            cout<<"Super class"<<endl; 
        }
};

class Sub : public Super
{ 
    int y;
    public:
        Sub()
        {
            cout<<"Sub class"<<endl;
        }
};

int main()
{
    Super* ptr;    // Super class pointer
    Sub obj;
    ptr = &obj;
    // OR

    Super &ref = obj;    // Super class's reference    
}
