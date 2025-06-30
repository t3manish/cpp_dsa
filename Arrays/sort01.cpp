#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//0 1 0 1 1 0
//ans 0 0 0 1 1 1

/*
i value starts at first
arr[i] ==0;
then i++

j values starts at last
arr[j] ==1;
then j--


when both have opposites swamp
if (arr[i] == 1 && arr[j] == 0)
swamp(arr[i],arr[j])
i++;
j--;

*/


/*
// Example input array: arr = {0, 1, 0, 1, 1, 0}
// Suppose at this point:
// left = 0, right = 5

// This loop moves the 'left' pointer forward as long as:
// - arr[left] is 0 (meaning the element is already on the correct side)
// - left is less than right (to avoid crossing over the right pointer)

// Step-by-step for the example:

// Iteration 1:
// left = 0
// arr[left] == 0 (true)
// left < right (0 < 5) - true
// => increment left (left becomes 1)

// Iteration 2:
// left = 1
// arr[left] == 1 (false), so exit the loop

// After this loop, 'left' points to the first element from the left that is out of place (a 1) which might need to be swapped.
*/

void sortOne(int arr[], int n){
    int left =0, right = n-1;
    while (left<right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && right > left)
        {
            right--;
        }
        swap(arr[left],arr[right]);
        left++;
        right--;
        
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

    int arr[6] ={0,1,0,1,1,0};

    sortOne(arr,6);
    printArr(arr,6);
    

}