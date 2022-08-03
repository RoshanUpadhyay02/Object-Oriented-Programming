#include<iostream>
#include <fstream>
using namespace std;

int main() 
{
    fstream st; // Step 1: Creating object of fstream class
    st.open("C:\\Users\\rosha\\OneDrive\\Documents\\SRM\\Second Year\\Object Oriented Design and Programming\\Code\\Revision\\Unit 5\\Files and Streams\\studytonight.txt",ios::out);  // Step 2: Creating new file

    if(!st) // Step 3: Checking whether file exist
    {
        cout<<"File creation failed";
    }
    else     
    {
        cout<<"New file created";
        st<<"Hello Welcome to file Writing";  //Step 4: Writing to a file
        st.close(); // Step 5: Closing file
    }
return 0;
}
