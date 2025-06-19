#include<iostream>
using namespace std;

//- - - *
//- - * *
//- * * *
//* * * *

main(){
    int n;
    cout<<"Enter the input"<<endl;
    cin>>n;
    cout<<"Given input is :"<<n <<endl;
    int i =1;
    // i value goes to n value as column
    while(i<=n){
        //first space print
        int space = n-i;
        while(space){// Zero falses the condition
            cout<<" ";
            space = space -1;
        }

        //starts
        int col = 1;
        while(col<=i){
            cout << "*";
            col = col+1;
        }
        cout<<endl;
        i = i+1;
        
    }
}