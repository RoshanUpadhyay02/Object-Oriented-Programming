#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    int i,n,x=0,y;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    vector <int> v(100);
    vector <int>::iterator it;

    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
        cin>>v.at(i);

    printf("Enter the operation you want to perform: \n");
    printf("0. Enter -1 to EXIT\n1.Insert at end\n2.Pop last element\n3.Remove all elements\n4.Size of vecotr??\n5.Capacity of vector\n6.Print 1st elememt\n7.Print Last element\n8.Display\n\n");

    while(x != -1)
    {
        printf("Enter your choice: ");
        cin>>x;
        switch(x)
        {
            case 1:
                cout<<"Enter the value: ";
                cin>>y;
                v.push_back(y);
                cout<<"The value added successfully!!"<<endl;
                break;
            case 2:
                v.pop_back();
                cout<<"The value removed successfully!!"<<endl;
                break;
            case 3:
                v.clear();
                cout<<"All values removed!!"<<endl;
                break;
            case 4:
                cout<<"The size of the vector is: "<<v.size()<<endl;
                break;
            case 5:
                cout<<"The capacity of the vector is: "<<v.capacity()<<endl;
                break;
            case 6:
                cout<<"The first element of the vector is: "<<v.front()<<endl;
                break;
            case 7:
                cout<<"The last element of the vector is: "<<v.back()<<endl;
                break;
            case 8:
                cout<<"The elements of the vector are:\n";
                if(v.empty())
                    cout<<"VECTOR EMPTY!!";
                else
                {
                    for(it = v.begin(); it != v.end();++it)
                    {
                        if(*it != 0)
                            cout<<*it <<' ';        
                    }
                }
                cout<<endl;
                break;
        }
        cout<<endl;
    }
    cout<<"\n\nThank You!!";

    return 0;
}