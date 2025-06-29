#include<iostream>
#include <cmath>
using namespace std;

void printFunction(int arr[],int size){
    cout<< "were are using functions"<<endl;
    // Don't do sizeof here, because arr decays to pointer
    // Just use the size passed as an argument

    // int arrSize = sizeof(arr)/sizeof(int);
    // cout << "Array Size: "<<arrSize<<endl;

// Your pointer size (sizeof(arr)) is probably
// 8 bytes (on a 64-bit system).
// sizeof(int) is 4 bytes.
// So arrSize = 8 / 4 = 2.

    for (int i = 0; i < size; i++)
    {
        cout<<"Array at index "<< i << " is: "<< arr[i] <<endl;
    }
    cout<< "used functions"<<endl;
    
}

main(){
    // int arr[15];//random values stored

    int arr[3]={100,101,102};

    // cout<<"Array at index 0 is: "<< arr[0] <<endl;

    //used for loop
    for (int i = 0; i < 3; i++)
    {
        cout<<"Array at index "<< i << " is: "<< arr[i] <<endl;
    }
    
    //Using function
    //using size of()
    int arrSize = sizeof(arr)/sizeof(int);
    cout << "Array Size: "<<arrSize<<endl;


    printFunction(arr,arrSize);
}