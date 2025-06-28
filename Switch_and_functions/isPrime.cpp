#include <iostream>
using namespace std;

//Using booleans
bool isPrimeNumber(int n){

    if(n==0){
        return 0;
    }

    for(int i=2; i<n;i++){//(n-1)

        if(n%i == 0){//Not % by 2 here n value % 2
            return 0;
        }

    }
    return 1;
}

int main(){
    cout<< "Enter the number: ";
    int a ;
    cin>> a;
    if (isPrimeNumber(a)){
        cout<< "Its a Prime number :"<< a <<endl;
    }
    else{
        cout<< "Its not a Prime number :" << a << endl;
    }

}