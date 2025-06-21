#include<iostream>
using namespace std;
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

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
        int num =1;
        while(x<j){
            cout <<num<<" ";
            x = x+1;
            num = num+1;
        }



        // #first half x
        int star = 1;
        while(star<i){
            cout << "* ";
            star = star+1;
        }

        // second half x
        int space = 1;
        while (space < i) {
            cout << "* ";  // two spaces for alignment
            space++;
        }

        // cout<<n-i+1;
        int e=1;
        int h=n-i+1;
        while(e<=h){
            cout<<h-e+1<<" ";
            e++;
        }

        i =i+1;
        cout<<endl;
        
    }
}
