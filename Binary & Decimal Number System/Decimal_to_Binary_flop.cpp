#include<iostream>
using namespace std;

main(){
    int n = 10;
    int ans=0;
    int sum=0;
    while(n!=0){
        ans =n%2;
        cout << ans<<" "<<endl;
        sum =sum*10+ ans;//stores sum as decimal 101
// Iterations:
// bit = 0 → sum = 0
// bit = 1 → sum = 0 * 10 + 1 = 1
// bit = 0 → sum = 1 * 10 + 0 = 10
// bit = 1 → sum = 10 * 10 + 1 = 101
// sum becomes 101 (decimal), but the first zero bit has disappeared because integers do not keep leading zeros.
        n /= 2;
    }
    
    int rev =0;
    while (sum!=0)
    {
        rev = rev*10+(sum%10);
        sum /=10;
    }
    cout<< rev<<" ";

    
}