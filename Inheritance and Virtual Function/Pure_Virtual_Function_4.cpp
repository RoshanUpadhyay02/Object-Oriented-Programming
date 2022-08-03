#include <iostream>
using namespace std;

class Weapon 
{
	public:
		virtual ~Weapon() = default;	
		virtual void attack() const = 0;
};

void Weapon::attack() const 
{
	cout<<"Default attack..\n";
}

class Sword : public Weapon 
{
public:
	void attack() const override 
	{
        // Calls default member function (Weapon::attack)
		Weapon::attack(); 
		cout<<"Sword attack...\n";
	}	
};

int main()
{
    Weapon *w;
    Sword s;
    w = &s;
    w->attack();

    return 0;
}
