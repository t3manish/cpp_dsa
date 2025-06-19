#include<iostream>
using namespace std;

//D
//C D
//B C D
//A B C D

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
        // int num =i;
        char c = 'A'+(n-);// restarts as new value from A + i(i is row)
        while(j<=i){
            cout<<c<<" ";
            j = j+1;
            c = c +1;
        }
        i =i+1;
        cout<<endl;
    }
}