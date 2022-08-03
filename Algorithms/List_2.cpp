#include <iostream>
#include<list>
using namespace std;

int main() {
	// your code goes here
	
	list<int> l1;
	list<int>::iterator it=l1.begin();
	//insert element in the begining
	l1.insert(it,{1,2,3,4,5});
	l1.push_front(0);
	
	l1.push_back(6);
	
	l1.insert(l1.end(),{7,8,9,10});
	it=l1.begin();
	advance(it,3);
	l1.insert(it,{11,22,33});
	for(auto it=l1.begin();it!=l1.end();it++)
	    cout<<*it<<" ";
	cout<<endl;
	cout<<l1.front();
    cout<<endl;
	cout<<l1.back();
    cout<<endl;
	
	cout<<l1.size();
    cout<<endl;
	cout<<"\n"<<l1.empty();
    cout<<endl;
	l1.sort();
    cout<<endl;
		for(auto it=l1.begin();it!=l1.end();it++)
	    cout<<*it<<" ";
	cout<<endl;
	l1.reverse();
	cout<<endl;
	for(auto it=l1.begin();it!=l1.end();it++)
	    cout<<*it<<" ";
	cout<<endl;
	 l1.remove(33);
	 l1.pop_front();
	 l1.pop_back();
	 cout<<endl;
	 	for(auto it=l1.begin();it!=l1.end();it++)
	    cout<<*it<<" ";
	cout<<endl;
	return 0;
}
