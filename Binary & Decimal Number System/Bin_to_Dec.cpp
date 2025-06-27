#include<iostream>
#include <cmath>
using namespace std;

main(){
    int n =1010;
    //2^3 2^2 2^1 2^0
    //8+0+2+0=10
    //we have care about only when its 1 bits
    //we will use division and moduluos 
    int i=0, digit=0;
    int ans =0;
    while (n!=0)
    {
        digit = n%10;//last digit
        //1010%10 -> 0
        // 101%10 -> 1
        // 10%10 ->0
        // 1%10 ->1

        if (digit == 1){ 
            //0 == 1 not
            //1 ==1 yes
            //0 ==1 not
            //1 ==1 yes
            ans = ans+pow(2,i);
        //0+2^1 -> 2 
        //2+2^3 ->2+8 ->10
        }

        n/= 10;
        // 1010/10 ->101
        //101/10 ->10
        //10/10 ->1
        // 1/10 ->0

        i++;
        //0+1 -> 1
        //1+1 -> 2
        //2+1 ->3
        //3+1 ->4

    }
    cout << ans <<endl;
    
}