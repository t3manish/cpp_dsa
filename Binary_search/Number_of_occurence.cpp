#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1 2 3 3 3 3 5
//0 1 2 3 4 5 6
// number of occurences 3


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


pair <int,int> firstAndLastPostion(const vector<int>& arr, int n , int k){
    pair <int,int> p;// here it stores two int values
    p.first = firstOcc(arr.data(),n,k); // Pass pointer to internal array
    p.second = secondOcc(arr.data(),n,k);
    return p;
}

//number occurence
int numberOcc(int a, int b){
    int ans = (b-a) +1;
    return ans;
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
    vector<int> test ={1,2,3,3,3,3,5};

    pair<int,int> outputz = firstAndLastPostion(test,test.size(),3);// first pass and store the return value in pairs

    int arr[2] = {outputz.first,outputz.second};

    printArr(arr,2);
    cout << "First occurrence: " << outputz.first << ", Last occurrence: " << outputz.second << endl;
    cout << "Total number of occurence: "<< numberOcc(outputz.first,outputz.second);


}