#include<iostream>
using namespace std;

main(){
    int n, a=0, b=1, nextNum;
    cout<<"Enter N Number: ";
    cin>>n;
    // cout<<"Enter A Number: ";
    // cin>>a;
    // cout<<"Enter B Number: ";
    // cin>>b;
    cout << a << " ";
    cout << b << " ";
    for(int i=0;i<=n;i++){
        
        nextNum = a+b;
        a=b;
        b=nextNum;
        cout <<b << " ";
        // n++;
    }
}