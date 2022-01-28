#include  <iostream>
using namespace std;

class Test
{
    private:
    int x=1;  // private
    public:
    int y=2;  // public
    protected:
    int z=3;  // protected
    friend class Test2;  // friend

    inline void display(){}
};

int main()
{
    Test ob;
    return 0;
}