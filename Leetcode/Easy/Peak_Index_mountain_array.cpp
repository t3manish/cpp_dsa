#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// revise it properly

/*
Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1
*/


    int peakIndexInMountainArray(vector<int>& arr) {
        //three condtions
        //have to use O(log(n))
        int s=0, e=arr.size()-1;
        
        //have to return the index

        while(s<e){// its equals its goes on forever
        int mid = s + (e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }else{
            e = mid;
        }
        }
        return s;
    }

// 0 1 0
//0 < 1
//mid => 0+1/2 =>0
// s =0, e=2
//s = mid +1 => 1

// why there is no e= mid -1
//s =2, e=2,so thats the reason we keep s<e to break the while loop
//0 < 0
// condtion false
//inside if we are using while loop as 0<=0
//then second condtion e=2
//e = 2-1
//then e =1 we are taking  s as answer, but here both s and e are same place 
//this is peak index in a mountain array 

int main(){
    vector<int> arr = {0,1,1,3,2,0};//only cares the first peak
    int ans = peakIndexInMountainArray(arr);
    cout <<"Peak index is : " <<ans <<endl; 
}

/*
      /\ ---> peak element
     /  \
    /    \
   /      \ 

   peak element arr[i-1] < arr[i] > arr[i+1]
   left side of triangle arr[i] < arr[i+1]
   right side of triangle arr[i] > arr[i+1]

*/