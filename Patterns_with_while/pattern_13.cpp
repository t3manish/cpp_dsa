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
        //first space print
        int space = n-i;
        while(space){// Zero falses the condition
            cout<<"_";
            space = space -1;
        }
        
        //starts
        int col = 1;
        while(col<=i){
            cout << col;
            col = col+1;
        }

        // Print descending numbers from i-1 to 1
        int colDesc = i - 1;
        while (colDesc >= 1) {
            cout << colDesc;
            colDesc--;
        }

        cout<<endl;
        i = i+1;
        
    }
}