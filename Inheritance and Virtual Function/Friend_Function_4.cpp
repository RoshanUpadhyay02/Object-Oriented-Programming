#include <iostream>
using namespace std;

class second;	//Forward Declaration

class first
{
	private:
		int x;
	public:
        void getdata();
        void display(first i);
        friend int sum(first one,second two);
};

class second
{
	private:
		int y;
	public:
		void getdata();
		void display(second j);
        friend int sum(first one,second two);
};

void first::getdata()
{
    cout<<"Enter a Value for X: ";
	cin>>x;
}

void second::getdata()
{
    cout<<"Enter a value for Y: ";
	cin>>y;
}

void first::display(first i)
{
    cout<<"X : "<<i.x<<endl;
}

void second::display(second j)
{
    cout<<"Y : "<<j.y<<endl;
}

int sum (first one,second two)
{
	int temp;
	temp = one.x + two.y;
	return(temp);
}

int main()
{
	first a;
	second b;
	a.getdata();
	b.getdata();
	a.display(a);
	b.display(b);
	int te = sum(a,b);
	cout<<"Sum of the two Private data variable (X + Y) = "<<te<<endl;

}
