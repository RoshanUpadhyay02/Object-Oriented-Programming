#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main () 
{ 
    vector<int> vec { 10, 20, 30, 40 }; 
    vector<int>::iterator it; 
    // Element to be searched 
    int ser = 30; 
   // std::find function call 
    it = find(vec.begin(), vec.end(), ser); 
    if (it != vec.end()) 
    { 
        cout << "Element " << ser <<" found at position : " ; 
        cout << it - vec.begin() + 1 << "\n" ; 
    } 
    
    return 0; 
} 
