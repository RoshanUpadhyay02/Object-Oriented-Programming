#include <iostream>
using namespace std;

class test
{
    private:
        test()
        {
            cout<<"Private Constructor"<<endl;
        }
    public:
        friend void fan();
};
void fan()
{
    test ob;
    cout<<"Frined Function"<<endl;
        
}

int main()
{
    fan();
}