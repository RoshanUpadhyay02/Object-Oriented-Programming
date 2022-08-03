#include<iostream> 
#include<array> 
using namespace std; 
int main() 
{ 
    int i;
    // Initializing the array elements 
    array<int,6> ar = {1, 2, 3, 4, 5, 6}; 
    array<int,6> ar1 = {0,0,0,0,0,0};
  
    // Printing first element of array 
    cout << "First element of array is : "; 
    cout << ar.front() << endl; 
  
    // Printing last element of array 
    cout << "Last element of array is : "; 
    cout << ar.back() << endl; 
  
    // Printing array elements using at() 
    cout << ar.at(4) << endl; 
    // Printing number of array elements 
    cout << "The number of array elements is : "; 
    cout << ar.size() << endl; 
  
    // Printing maximum elements array can hold 
    cout << "Maximum elements array can hold is : "; 
    cout << ar.max_size() << endl; 

    for(i=0;i<6;i++)
        cout<<ar.at(i)<<" ";
 
    // Swapping ar1 values with ar 
    ar1.swap(ar);
  
    // Checking size of array if it is empty 
    ar1.empty()? cout << "\nEmpty": cout << "\nNot empty\n"; 

    for(i=0;i<6;i++)
        cout<<ar.at(i)<<" ";
};
