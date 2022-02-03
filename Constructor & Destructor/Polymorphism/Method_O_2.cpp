#include <iostream>
using namespace std;

class Grocery
{
    public:
        void apple(int cost,char fresh,int quantity)
        {
            if(fresh == 'y' || fresh == 'Y')
            {
                int total_cost = quantity*cost;
                cout<<total_cost<<endl;
            }
            else
                cout<<"Don't Buy!!"<<endl;
        }
        void apple(int cost, int quantity,char fresh)
        {
            if(fresh == 'y' || fresh == 'Y')
            {
                int total_cost = quantity*cost;
                cout<<total_cost<<endl;
            }
            else
                cout<<"Don't Buy!!"<<endl;
        }
        void banana(int cost, int quantity,char fresh)
        {
            if(fresh == 'y' || fresh == 'Y')
            {
                int total_cost = quantity*cost;
                cout<<total_cost<<endl;
            }
            else
                cout<<"Don't Buy!!"<<endl;
        }
        void banana(int cost,char fresh,int quantity)
        {
            if(fresh == 'y' || fresh == 'Y')
            {
                int total_cost = quantity*cost;
                cout<<total_cost<<endl;
            }
            else
                cout<<"Don't Buy!!"<<endl;
        }
};

int main()
{
    Grocery ll;
    ll.apple(100,'y',3);
    ll.apple(50,10,'y');
    ll.banana(30,'y',6);
    ll.banana(5,20,'n');
    return 0;
}