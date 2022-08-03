#include <iostream>
#include<map>
using namespace std;

int main() {
	// your code goes here
	
	map<int,string> students;
	pair <int,string> p1;
	p1.first=147;
	p1.second ="Gupta";
	students.insert(make_pair(143,"Raju"));
	students.insert(make_pair(113,"siva"));
	students.insert( pair<int,string> (4,"Babu"));
	students[131] ="chandru";
	students[121]="Ganesh";
	students.insert(p1);
	
	for (auto itr = students.begin(); itr !=  students.end(); ++itr) { 
        cout  << itr->first << "\t   \t" << itr->second << endl; 
     } 
     
	return 0;
}
