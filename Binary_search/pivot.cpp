#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 7  9  1  2  3 
// 0  1  2  3  4  
/*

y ans
9 |      *9
8 |    -      
7 |  *7 s=0          
6 |             
5 |              
4 |               
3 |                         *3 e=n-1
2 |                      *2
1 |                   *1                 
   -----------------------------
    1  2  3  4  5  6  7  8  9  x
Here we want lowest after the first line
arr[0] < arr[mid]//mid may change
but if its true then we have to get the second line 
so increment the the s++ 
return the s value SIMPLE

if we take e = mid -1
then it will go back to first line so we use e = mid

*/


int pivotValue(vector<int>& arr) {
        //three condtions
        //have to use O(log(n))
        int s=0, e=arr.size()-1;
        
        //have to return the index

        while(s<e){// its equals its goes on forever
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }
        }
        return s;
    }

main(){
    vector<int> arr = {7,9,1,2,3};//only cares the lowest value
    int ans = pivotValue(arr);
    cout <<"Pivot index is : " <<ans <<endl; 
}