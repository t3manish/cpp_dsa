#include<iostream>
using namespace std;

//   1   
//  121
// 12321
//1234321

main(){
    int n;
    cout<<"Enter the input"<<endl;
    cin>>n;
    cout<<"Given input is :"<<n <<endl;
    int i =1;
    // i value goes to n value as column
    while(i<=n){
        int j =n-i+1;
        // cout <<n-i+1<< " ";
        int x =0;
        while(x<j){
            cout <<"X" <<" ";
            x = x+1;
        }
        i =i+1;
        cout<<endl;
        
    }
}