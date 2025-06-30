#include<iostream>
#include <cmath>
using namespace std;
//Reverse Array

//Reverse Function
void arrReverse(int arr[],int n){
    int start =0;
    int end= n-1;
    while (start<=end)//with index we swap
    {
        swap(arr[start],arr[end]);//built in function swap
        start++;
        end--;
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
    arrReverse(arr,5); //Here the numbers are reversed
    arrReverse(brr,10);

    //Print Arrays
    printArr(arr,5);
    printArr(brr,10);

}