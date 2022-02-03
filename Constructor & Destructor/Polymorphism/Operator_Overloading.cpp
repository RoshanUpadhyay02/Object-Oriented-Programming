#include <iostream>
using namespace std;

class Sum
{
    private:
        int x=8;
    public:
        void operator ++()
        {
            x +=2;
        }
        void print()
        {
            cout<<"The sum is: "<<x;
        }
};

int main()
{
    Sum t;
    ++t;
    t.print();
}