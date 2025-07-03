#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

    int pivotValue(const vector<int>& arr) {
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


    int binarySearch(const vector<int>& arr, int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return -1;
    }


    int search(vector<int>& nums, int target) {
        //target which line exists ?
        //if end index value is greater than pivot
        //and pivot value is lesser than target
        int pivot = pivotValue(nums);
        int n = nums.size();
        //gpt
        if (n==0) return -1;

        //gpt
        if (pivot == 0)//normal
        {
            return binarySearch(nums,0,n-1,target);//normal binary search
        }
        
        if (nums[0] <= target)
        {
            return binarySearch(nums,0,pivot-1,target);//leftside first
        }else{
            return binarySearch(nums,pivot,n-1,target);//rightside
        }
        


        // logic fails at leeetcod at input of 5 1 3
        /*For input [5,1,3]:
            pivotValue(nums) will return 1 because 1 is the smallest element.
            nums[n-1] = nums[2] = 3
            nums[pivot] = nums[1] = 1
            target = 5
            //ouput is -1 should be 0 why ?
        */
        // if (nums[n-1] >= target && nums[pivot] <= target)//target>= nums[0]
        // {
        //     //BS on second line
        //     return binarySearch(nums,pivot,n-1,target);
        // }else{
        //     //BS on first line
        //     return binarySearch(nums,0,n-1,target);
        // }
        
    }


main(){
    vector<int> arr = {5,1,3};
    int target = 5;
    int ans =search(arr,target);
    if (ans != -1)
        cout << "Target found at index: " << ans << endl;
    else
        cout << "Target not found." << endl;

}




/* chagpt
int pivotValue(const vector<int>& arr) {
    int s = 0, e = (int)arr.size() - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    return s;
}

int binarySearch(const vector<int>& arr, int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int search(vector<int>& nums, int target) {
    int pivot = pivotValue(nums);
    int n = nums.size();

    if (nums[n - 1] >= target && nums[pivot] <= target) {
        return binarySearch(nums, pivot, n - 1, target);
    } else {
        return binarySearch(nums, 0, pivot - 1, target);
    }
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int ans = search(arr, target);

    if (ans != -1)
        cout << "Target found at index: " << ans << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
*/
