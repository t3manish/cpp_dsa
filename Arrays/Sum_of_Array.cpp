#include<iostream>
#include <cmath>
using namespace std;
//Sum of array

//function
int SumOfArray(int num[], int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans = num[i] + ans;
    }
    return ans;
    
}

main(){
    cout<<"Enter Size: ";
    int size;
    cin>>size;

    int num[100];

    //for loop for inputs
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    cout<<"The sum is: "<<SumOfArray(num, size);
    

}