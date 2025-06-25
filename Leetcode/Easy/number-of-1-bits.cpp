#include <iostream>
using namespace std;

int main()
{
    int n=11;
    int count =0;
    while(n!=0){
        int ans=n&1;
        if(ans==1){
            ++count;
        }
        n = n>>1;
    }
    cout<< count<<endl;
}