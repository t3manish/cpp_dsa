#include <iostream>
using namespace std;

main(){

    // print 1 to N
    int n;
    cin>>n;
    int i =1;
    // while(i <= n){
    //     cout<<i<< " ";
    //     i = i+1;
    // }

    // Sum of all Numbers
    int sum = 0;
    while(i<=n){
        sum = sum+i;
        i = i+1;
    }
    cout<<sum<<endl;
    
}