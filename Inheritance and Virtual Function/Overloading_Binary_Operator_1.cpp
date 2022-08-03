#include <iostream>
using namespace std;
class Distance 
{
    private:
      int feet; int inches;           
    public:
        Distance(){feet = 0;inches = 0;}
        Distance(int f, int i){feet = f;inches = i;}
        friend ostream &operator<<( ostream &output, const Distance &D ) 
        { 
            output << "F : " << D.feet << " I : " << D.inches;
            return output;            
        }
        friend istream &operator>>( istream  &input, Distance &D ) 
        { 
            input >> D.feet >> D.inches;
            return input;            
        }
        Distance operator +(const Distance &D)
        {
            Distance temp;
            temp.feet= feet+D.feet;
            temp.inches=inches+D.inches;
            if(temp.inches>12)
            {
                temp.feet +=(temp.inches/12);
                temp.inches =temp.inches%12;
            }
            return temp;
        } 
};

int main() 
{
   Distance D1(11, 10), D2(5, 11), D3;
   cout<<"Enter the value of object : "<<endl;
   cin>>D3;
   cout<<"First  & Second Distance : "<<D1<<D2;
   cout<<"Third Distance :"<<D3<<endl;
   Distance D4 =D3+D2;
   cout<<"Fourth Distance :"<<D4<<endl;
   return 0;
}
