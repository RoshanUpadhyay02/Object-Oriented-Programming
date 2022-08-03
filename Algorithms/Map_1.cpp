#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()
{
    map <char,int> mp;
    map <char,int> mymap,mymap1;
    mp.insert(pair<char,int>('a',2));   //key is ‘a' and 2 is value.
    mymap.insert(mp.begin(),mp.end());
    //declaring iterator for map
    map <char,int>::iterator it;
    //mapped by key 'b'.
    it = mp.find('b');
    //prints key and element's value.
    cout<<it->first<<" and "<<it->second<<endl;
    //alternative way to insert elements
    mymap1['x'] = 23;
    mymap1['y'] = 21;
    cout<<"Printing elem mapped by key 'b' : "<<mp.at('b');
   //swap contents of 2 maps namely mymap and mymap1.
    mymap.swap(mymap1);
    /* prints swapped elements of mymap and mymap1 by iterating all the elements through       using   iterator. */
    for(it=mymap.begin();it!=mymap.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    for(it=mymap1.begin();it!=mymap1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    mymap1.erase('c');
    //prints all elements of mymap after erasing element at 'c'.
    cout<<"Elements of mymap1 after erasing element at key 'c' : "<<endl;
    for(it=mymap1.begin();it!=mymap1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    mymap1.erase(mymap1.begin(),mymap1.end());
    cout<<"As mymap1 is empty so empty() function will return 1 : " << mymap1.empty()<<endl;

    cout<<"Number of elements with key = 'a' in map mp are : "<<mp.count('a')<<endl;
    if(mp.empty())
    {
        cout<<"Map is empty"<<endl;
    }
    else
    {
        cout<<"Map is not empty"<<endl;
    }

    return 0;
}
