#include<iostream>
using namespace std;
// when n=3
//  1
//  22
//  333
//  4444

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
        while(j<=i){
            cout<<i<<" ";
            j = j+1;
        }
        i =i+1;
        cout<<endl;
    }
}