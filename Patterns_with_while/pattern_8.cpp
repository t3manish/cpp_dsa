#include<iostream>
using namespace std;
// when n=3
//  1
//  2 1
//  3 2 1
//  4 3 2 1



main(){
    int n;
    cout<<"Enter the input"<<endl;
    cin>>n;
    cout<<"Given input is :"<<n <<endl;
    int i =1;
    // i value goes to n value as column
    while(i<=n){
        // j values goes to i values limit acts as rows
        int j=1;// j values starts as fresh every time the i loops runs
        int num =i;
        while(j<=i){
            cout<<i-j+1<<" ";
            j = j+1;
            num = num +1;
        }
        i =i+1;
        cout<<endl;
    }
}