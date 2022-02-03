#include <iostream>
using namespace std;

class Overload
{
    private:
        int x = 5, y = 10;
    public:
        void display()
        {
            cout<<"Initial Value: "<<x<<endl;
        }
        void operator ++()
        {
            x *= 1;
            cout<<"Overloading Prefix Increment: "<<x<<endl;
        }
        void operator ++(int)
        {
            x += 2;
            cout<<"Overloading Postfix Increment: "<<x<<endl;
        }
        void operator --()
        {
            x /= 1;
            cout<<"Overloading Prefix Decrement: "<<x<<endl;
        }
        void operator --(int)
        {
            x -= 2;
            cout<<"Overloading Postfix Decrement: "<<x<<endl;
        }
};

int main()
{
    Overload ob;
    ob.display();
    ++ob;
    ob++;
    --ob;
    ob--;

    return 0;
}