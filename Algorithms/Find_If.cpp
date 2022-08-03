#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

bool IsOdd(int i)  
{ 
    return i % 2; 
} 
int main() 
{ 
    vector<int> vec{ 10, 25, 40, 55 }; 

   // Iterator to store the position of element found 
    vector<int>::iterator it; 

   // std::find_if 
    it = find_if(vec.begin(), vec.end(), IsOdd); 
    cout << "The first odd value is " << *it << '\n'; 

   // Iterator to store the position of element found 
    vector<int>::iterator ite; 

   // std::find_if_not 
    ite = find_if_not(vec.begin(), vec.end(), IsOdd); 
    
    cout << "The first non-odd(or even) value is " << *ite << '\n'; 
    
    return 0; 
} 
