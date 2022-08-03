#include <iostream>
using namespace std;

class pet
{
    private:
        char name[5];
    public:
        virtual void getdata()=0; 
        virtual void display()=0;
};

class fish:public pet
{
    private:
        char environment[10];
        char food[10];
    public:
        void getdata();
        void display();
};

class dog: public pet
{
	private:
		char environment[10];
		char food[10];
	public:
		void getdata();
		void display();
};

void fish::getdata()
{
	cout<<"Enter the Fish Environment required : ";
	cin>>environment;
	cout<<"Enter the Fish food require : ";
	cin>>food;
}

void fish::display()
{
    cout<<"---------------------------------------"<<endl;
	cout<<"Fish Environment : "<<environment<<endl;
	cout<<"Fish Food : "<<food<<endl;
    cout<<"---------------------------------------"<<endl;
}

void dog::getdata()
{
	cout<<"Enter the Dog Environment required : ";
	cin>>environment;
	cout<<"Enter the Dog Food require : ";
	cin>>food;
}

void dog::display()
{
    cout<<"---------------------------------------"<<endl;
	cout<<"Dog Environment : "<<environment<<endl;
	cout<<"Dog Food : "<<food<<endl;
	cout<<"---------------------------------------"<<endl;
}

int main()
{
	pet *ptr;
	fish f;
	ptr=&f;
	ptr->getdata();
	ptr->display();
	dog d;
	ptr=&d;
	ptr->getdata();
	ptr->display();

    return 0;
}


