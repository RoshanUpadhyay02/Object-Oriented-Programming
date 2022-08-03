#include <iostream>
#include <vector>
#include <iterator>
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 

    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "Size : " << g1.size(); 
    cout << "\nCapacity : " << g1.capacity(); 
    cout << "\nMax_Size : " << g1.max_size();
    if (g1.empty() == false) 
            cout << "\nVector is not empty";

    cout << "\nfront() : g1.front() = " << g1.front(); 
    cout << "\nback() : g1.back() = " << g1.back(); 

    // fill the array with 10 five times 
        g1.assign(5, 10); 

    // removes last element 
        g1.pop_back(); 
    
    // inserts 5 at the beginning 
        g1.insert(g1.begin(), 5); 

    // erases the vector 
        g1.clear();
};
