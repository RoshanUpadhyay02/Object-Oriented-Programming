#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream st; 			// step 1: Creating object of fstream class
    st.open("C:\\Users\\rosha\\OneDrive\\Documents\\SRM\\Second Year\\Object Oriented Design and Programming\\Code\\Revision\\Unit 5\\Files and Streams\\studytonight.txt",ios::in);   // Step 2: Creating new file
    if(!st) 
    {				// Step 3: Checking whether file exist 
        cout<<"No such file";
    }
    else      
    {
        char ch;
        while (!st.eof())
        {
            st>>ch;  				// Step 4: Reading from file
            cout<<ch;  				 // Message Read from file
        }
        st.close();				 // Step 5: Closing file  
    }
    
    return 0;
}
