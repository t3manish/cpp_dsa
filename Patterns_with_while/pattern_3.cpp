#include<iostream>
using namespace std;

//123
//456
//789

//A B C
//D E F
//G H I

main(){
    int n;
    cout<<"Enter the input"<<endl;
    cin>>n;
    cout<<"Given input is :"<<n <<endl;
    int i =1;
    // i value goes to n value as column
    // int num =1;// its a global variable 
    char c = 'A';//depends on what you use 
    while(i<=n){
        // j values goes to i values limit acts as rows
        int j=1;// j values starts as fresh every time the i loops runs
        while(j<=n){
            cout<<c<<" ";
            j = j+1;
            c = c+1; //so the num will be stored in global variable changed to char
        }
        i =i+1;
        cout<<endl;
        
    }
    // cout << "Value of num after loops: " << num << endl;
}