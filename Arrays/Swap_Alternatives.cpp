#include<iostream>
#include <cmath>
using namespace std;
//Reverse Array

// 1 3 2 7 11 8
// 3 1 7 2 8 11

//Reverse Function swap alternative
void arrReverseSwap(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        if (i+1 < n)
        {
            swap(arr[i],arr[i+1]);// 0 1
        }
        i+=1;// OR in for loop i+2
        
    }
    
    
}


//Print Array function
void printArr(int arr[], int n){//use void 
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;//next line 
}


main(){
    int arr[5]={2,-4,23,4,1};
    int brr[10]= {1,2,3,4,5,6,7,8,9,10};

    //Reverse the arrays
    arrReverseSwap(arr,5); //Here the numbers are reversed
    arrReverseSwap(brr,10);

    //Print Arrays
    printArr(arr,5);
    printArr(brr,10);

}