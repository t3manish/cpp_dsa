#include <iostream>
#include <math.h>
using namespace std;
//Here is what I got:

// Input: 1534236469
// Output: 1056389759
// Expected: 0

// I believe an int is not sufficient and 
//the output is exceeding 
// the limit of an 32-bit integer.

int main()
{
    int x=1534236469;
    //ans = (x*10^i+ans)
    int ans=0;
    while (x != 0)
    {
        int digit = x%10;//last digit

        // Check for overflow before multiplying or adding
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7)) {
            ans= 0; // Overflow would occur
            break;
        }
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) {
            ans = 0; // Underflow would occur
        }

        ans = ans * 10 + digit;
        x /=10;//removes last
    }
    
    cout<< ans<<endl;
    
    
}