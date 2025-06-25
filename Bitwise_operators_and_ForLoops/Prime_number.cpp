#include<iostream>
using namespace std;

main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i=2;
    bool isPrime =1;
    while(i<=n){
        if(i%2 == 0){//simple rem = 0 shouldnt come 
            isPrime=0;
            break;
        }
        i++;
    }
    if (isPrime == 0){
        cout<< "Its not a Prime";
    }
    else{
        cout<< "Its a Prime";
    }
}