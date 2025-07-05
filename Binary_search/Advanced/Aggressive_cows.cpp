#include<iostream> // This allows us to use input and output, like showing messages on the screen
#include<vector>   // This lets us use vectors, which are like lists that can hold many numbers
#include <algorithm> // Essential for std::sort
using namespace std; // This means we don't have to write "std::" before things like cout or vector

// https://www.geeksforgeeks.org/problems/aggressive-cows/1

bool isPossible(vector<int> &stalls, int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    //now its 1
    
    for(int i=0; i<n; i++ ){
        // Check if current stall is at least 'mid' distance from last placed cow

        // Example for mid=2:
        // i=0: stalls[0]=1, 1-1=0 < 2; skip
        // i=1: stalls[1]=2, 2-1=1 < 2; skip
        // i=2: stalls[2]=4, 4-1=3 >= 2; place cow
        // cowCount=2, lastPos=4(atalls[i])
        // i=3: stalls[3]=8, 8-4=4 < 2; skip
        // i=3: stalls[4]=9, 9-4=4 < 5; skip
        // cows placed=2 < k=2 -> return false

        // Example for mid=3:
        // i=1: 2-1=1 < 3; skip
        // i=2: 4-1=3 >=3; place cow
        // cowCount=2, lastPos=4
        // i=3: 8-4=4 >=3; place cow
        // cowCount=3, lastPos=8
        // cowCount == k -> return true
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)//<=k means will get the real value
            {
                return true;
            }
            lastPos = stalls[i];//keeps track of the position of the last placed cow
        }
    }
    return false; 
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end()); // stalls = {1, 2, 4, 8, 9}
   	int s = 0;
    int n = stalls.size();
    int e=stalls[n-1];//9
    int ans = -1;
    int mid = s + (e-s)/2;
    //0+(9-0)/2 -> 4 mid is 4
    
    
    while(s<=e) {
        //0<4 T
        if(isPossible(stalls, k, mid, n)) {
            //arr , 2 , 4, 4

            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

main(){
    vector<int> arr = {1, 2, 4, 8, 9}; 
    int k = 3;

    // Call the function to find the best way to split books and print the answer
    cout << "The answer is " << aggressiveCows(arr, k); 

}