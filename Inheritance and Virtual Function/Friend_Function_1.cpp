#include <iostream>
using namespace std;

class Other
{
    public:
        void fun();
};

class WithFriend
{
    private:
        int i;
    public:
        // Member function of class WithFriend
        void getdata();
        // Making function of class Other as friend function
        friend void Other::fun();
        // Making the complete class as friend
        friend class Other;
};

int main()
{
    WithFriend w;

    return 0;
}