#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //decimal to binary
    // if decimals 0 exit
    // for creating masking means i want all 1's

    int n = 10;//n is 10 ->0101 ->output is 5
    int  m =n;
    int mask =0;

    if (n == 0){
        cout<<1;
    }

    while (m!=0)//right shift with OR 1 will give all values 1 as masked values
    {
        mask = (mask<<1) | 1; 
        m = m >> 1;//i can use divide by 2
    }

    int ans = (~n) & mask;
    cout << ans;
    return 0;
}
