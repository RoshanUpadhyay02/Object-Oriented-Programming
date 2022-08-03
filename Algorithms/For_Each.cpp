#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 

void printx2(int a) 
{ 
    cout << a * 2 << " "; 
} 

int main() 
{ 
// initializing array 
int arr[5] = { 1, 5, 2, 4, 3 }; 
cout << "Using Arrays:" << endl; 
// printing array using for_each 
// using function 
cout << "Multiple of 2 of elements are : "; 
for_each(arr, arr + 5, printx2); 
}
