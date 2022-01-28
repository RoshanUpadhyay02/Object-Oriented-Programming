#include <iostream>
using namespace std;

class car
{
    public:
    int g; // Instance Variable
    static int h;
    const int i = 10; // Constant Variable
    void display(int m)
    {
        int model = m; // local variable
        cout<<"Local Variable: "<<model<<endl;
        cin>>g;
        cout<<"Instance Variable: "<<g<<endl;
        cout<<"Constant Variable: "<<i<<endl;
    }
};

int main()
{
    int x;
    cin>>x;
    car ob;
    ob.display(x);
    return 0;
}