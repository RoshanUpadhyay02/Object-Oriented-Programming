#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> dek;	
    for(int i=0; i<5; i++)
        dek.push_back(i);
    
    cout << "deque size is " << dek.size() << endl;
    // resizing
    dek.resize(3);
    cout << "deque size after resize is " << dek.size() << endl;
    cout << "maxsize of deque is " << dek.max_size() << endl;
        
        //checking empty condition
    dek.empty() ? cout << "finally deque is empty" : cout << "deque is not empty";
    cout << endl;

    deque <int> d1(5,10);
    deque <int> d2(5,20);
        
    cout << "Elements of the deque1 before swap" << endl;
        for(int i=0; i<5; i++)
            cout << d1[i] << " ";
    cout << endl;
    cout << "Elements of the deque2 before swap" << endl;
        
    for(int i=0; i<5; i++)
        cout << d2[i] << " ";
        cout << endl;

    cout << "Elements of the deque1 after swap" << endl;
    d1.swap(d2);
    for(int i=0; i<5; i++)
    cout << d1[i] << " ";
    cout << endl;

    cout << "Elements of the deque2 after swap" << endl;
    for(int i=0; i<5; i++)
        cout << d2[i] << " ";
    cout << endl;
    return 0;
}
