#include <iostream> 
using namespace std;

int main() 
{
    int temp = 0; 
    cout << "(Here 1) Currently before the try statement" <<endl; 
    try 
    { 
        cout << "(Here 2)Currently inside the try statement" << endl; 
        if (temp == 0) 
        { 
        throw temp; 
        }
        cout << "(Here 0) Since, this is after throw statement, flow jumps to catch and this never executed" << endl;
    } 
    catch (int x ) 
    { 
        cout << "(Here 3) Flow transferred to catch block" <<endl; 
    } 

    cout << "(Here 4) Try catch and throw blocks executed back to int main block"; 
    
    return 0; 
} 
