#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    int values[] = {5,1,6,9,10,1,12,5,5,5,1,8,9,7,46};
    int count_5 = count(values, values+15, 5);
    /* now count_5 is equal to 4 */
    vector<int> v(values, values+15);
    int count_1 = count(v.begin(), v.end(), 1);
    /* now count_1 is equal to  */
    cout<<count_1<<endl;
    
    return 0;
}
