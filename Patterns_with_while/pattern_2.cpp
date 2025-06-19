#include<iostream>
using namespace std;

//321
//321
//321

// A B C
// A B C
// A B C

main(){
    int n;
    cout<<"Enter the input"<<endl;
    cin>>n;
    cout<<"Given input is :"<<n <<endl;
    int i =1;
    // i value goes to n value as column
    while(i<=n){
        int j=1;
        while(j<=n){//n
            // char r = 'A'+i/j-1;
            cout<<(char)('A'+j-1)<<" ";//n-j+1<
            j = j+1;
        }
        i =i+1;
        cout<<endl;
    }
}