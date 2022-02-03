#include <iostream>
using namespace std;

class Test
{
    private:
        int x;
    public:
        void run(float r)
        {
            cout<<r<<endl;
        }
        void run(int i, int j = 8)
        {
            cout<<i<<"\t"<<j<<endl;
        }
        void run(int, int, int=0);
        // void fun(int i)
        // {
        //     cout<<i<<endl;
        // }
        void fun(int &i)
        {
            cout<<i<<endl;
        }
};

int main()
{
    int x=5;
    Test t;
    //t.run(3.25); // error as not float value
    t.run(3.25f);
    t.run(6);
    //t.run(x);  // shows error
    t.fun(x);

    return 0;
}