#include <iostream>
using namespace std;

template<class T1,class T2>
class Test
{
	private:
		T1 a;
		T2 b;
	public:
		Test(T1 x,T2 y)
		{
			a = x;
			b = y;
		}
		void show()
		{
			cout<<a<<" and "<<b<<endl;
		}
};

int main()
{
    // Test <int, float> t(10,10.4);
    Test <int, char> t(10,'c');
    t.show();

    return 0;
}
