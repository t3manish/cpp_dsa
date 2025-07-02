#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//learned about pairs pair<int,int> p
//1 2 3 3 5
//0 1 2 3 4

//first occurance
//Left side I want from the mid
int firstOcc(const int arr[], int size, int key){
    int s=0,e= size-1;
    int ans =-1;
    while (s <= e)
    {
        int mid = s+ (e-s)/2;//optimized then s+e/2
        if (arr[mid] == key)//left side only we care so
        {
            ans = mid;
            //here e = mid-1
            e = mid -1;

        }else if (arr[mid] < key)//Check right side
        {
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        
        
    }
    return ans;
    
}

//second occurance
//right side I want from the mid
int secondOcc(const int arr[], int size, int key){
    int s=0,e= size-1;
    int ans =-1;
    while (s <= e)
    {
        int mid = s+ (e-s)/2;//optimized then s+e/2
        if (arr[mid] == key)//right side only we care so
        {
            ans = mid;// if we use return it will stop here means breaks and outputs as 2 but we want 3
            //here e = mid-1
            s = mid + 1;

        }else if (arr[mid] < key)//Check right side
        {
            s = mid + 1;
        }
        else{
            e = mid -1;
        }
        
        
    }
    return ans;
    
}

// First time using pairs
pair <int,int> firstAndLastPostion(const vector<int>& arr, int n , int k){
    pair <int,int> p;// here it stores two int values
    p.first = firstOcc(arr.data(),n,k); // Pass pointer to internal array
    p.second = secondOcc(arr.data(),n,k);
    return p;
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
    int first [5] = {1,2,3,3,5};// for individual
    vector<int> test ={0,0,1,1,2,2,2,2};// for pairs 

    // int firsts = firstOcc(first,5,3);
    // cout << "Using only first Occurence index at: "<< firsts << endl;

    // int seconds = secondOcc(first,5,3);
    // cout << "Using only second Occurence index at: "<< seconds << endl;

    pair<int,int> outputz = firstAndLastPostion(test,test.size(),2);// first pass and store the return value in pairs

    int arr[2] = {outputz.first,outputz.second};// storing two pairs in a array

    printArr(arr,2);//using print function

    // cout<<"Printing the variables: "<< outputz << endl;//getting error cant print
    cout << "First occurrence: " << outputz.first << ", Last occurrence: " << outputz.second << endl;


}