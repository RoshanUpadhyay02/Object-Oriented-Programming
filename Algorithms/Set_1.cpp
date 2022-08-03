#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main()
{
	set<int> s1;
	set<int> :: iterator it;
	for(int i=0; i<5; i++)
		s1.insert(i+10);
    s1.empty() ? cout <<"list is empty" << endl: cout << "list is not empty" << endl;
    cout << "size of the list is " << s1.size() << endl;
    cout << "maximum size of the list is " << s1.max_size() << endl;
    cout << "finding elemnt 12 in list" << endl;
    it= s1.find(12);
    cout << *it << endl;
    s1.insert(12);
    if(s1.count(22))
        cout << "number 22 is in the list " << endl;
    else
        cout << "22 is not in the list";
        
    return 0;
}
