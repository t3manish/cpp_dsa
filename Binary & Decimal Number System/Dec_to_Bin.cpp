#include<iostream>
#include <cmath>
using namespace std;

main(){
    int n=10;
    int bit=0;//always declare 0 if not will get random ouputs
    int ans=0;
    int i=0;
    while (n!=0)
    {
        bit = n&1;
        //10&1
        //1010 & 1
        //bit is 0

        //5 & 1
        //0101 & 1
        //bit is 1

        //2 & 1
        //0010 & 1
        //bit is 0

        //3 & 1
        //0011 & 1
        //bit is 1

        ans = (bit * pow(10,i)) + ans;
        //first
        //0*(10^0)+0 =0

        //2nd
        //1*(10^1)+previous ans is 0 =>10 + 0 =>10

        //3rd
        //0*(10^2)+10 => 0+10 =>10

        //4th
        //1*(10^3)+10 =>1000 + 10 => 1010

        n= n>>1;
        //n/2 ->10/2 ->5
        //n/2 ->5/2 ->2
        //n/2 ->2/2 ->1
        //n/2 ->1/2 ->0 exits

        i++;
        //0+1 = 1
        //1+1 = 2
        //2+1 = 3
        //3+1 = 4
    }
    cout << ans;
    

}