#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;

    for(int i=1; i<=n; i++){
        //1<=5
        //2<=5
        //3<=5
        //4<=5
        //5<=5
        //6<=5 false
        fact = fact * i;
        // 1*1=1
        //1*2 = 2
        //2*3 = 6
        //6*4 = 24
        //24*5 = 120
    }
    return fact;
}

int nCr(int n, int r){
    int num = factorial(n);
    int demoni = factorial(r) * factorial(n-r);
    return num/demoni;
}

main(){

    // cout << factorial(5)<<endl;
    int n,r;
    cout << "Enter the n and r values: ";
    cin >> n >> r;
    cout<< "The answer is : " << nCr(n,r) <<endl;
}