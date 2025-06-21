#include<iostream>
using namespace std;

//  4 3 2 1
//    3 2 1
//      2 1
//        1


main(){
    int n =4;
    int i = 1;
    while(i<=n){

        int space = 1;
        while (space < i) {
            cout << "* ";  // two spaces for alignment
            space++;
        }

        // cout<<n-i+1;
        int j=1;
        int h=n-i+1;
        while(j<=h){
            cout<<" "<<h-j+1;
            j++;
        }
        i++;
        cout<<endl;
    }
}