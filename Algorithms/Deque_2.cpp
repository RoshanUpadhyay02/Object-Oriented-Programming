#include <iostream>
#include <deque>
using namespace std;

int main() {
	// your code goes here
	
	//create a deque
	//creating deque with 10 elements
    deque <int> marks(10);
    
    cout<<endl;
    for(auto it=marks.begin();it!=marks.end();it++)
        cout<<*it<<" ";

    cout<<endl;

    //create deque with 10 elements, each value of 3
    deque <int> marks1(10,3);

    for(auto it=marks1.begin();it!=marks1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //create deque with array
    int array [5] = {1, 2, 3, 4, 5};
    deque <int> ranks(array,array+5);

    for(auto it=ranks.begin();it!=ranks.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    
    //adding elements to the
    marks.push_back(90);
    marks.push_front(66);
    
    //adding using insert option
    
    marks.insert(marks.begin(),88);
    
    marks.insert(marks.end(),4,100);
    
    marks.insert(marks.begin(), array , array+3);
    
    marks1.assign(5,95);
    cout<<endl;
    for(auto it=marks.begin();it!=marks.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    for(auto it=marks1.begin();it!=marks1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    //removing elements
    marks.pop_front();
    marks.pop_back();
    
    cout<<endl;
    for(auto it=marks.begin();it!=marks.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    marks1.clear();
    cout<<marks.size();
    
    deque<int>::iterator it,it1;
    it=marks.begin();
    marks.erase(it);
    it1=marks.begin();
    std::advance(it1,5);
    marks.erase(it,it1);
    
    cout<<endl;
    for(auto it=marks.begin();it!=marks.end();it++)
        cout<<*it<<" ";
    cout<<endl;

	return 0;
}