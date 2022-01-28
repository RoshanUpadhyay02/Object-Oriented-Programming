#include <iostream>
using namespace std;

class Test
{
    public:
        void car(){}
        static void engine(){}
        void fun()const{}
        inline void table(){}
        friend void chair(){}
};

int main()
{
    Test ob;
    return 0;
}