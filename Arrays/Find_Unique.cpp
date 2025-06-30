#include<iostream>
#include <cmath>
using namespace std;

int findUniqueArr(int arr[], int n){
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];// XOR with values only unquie values remains
    }
    return ans;
}

main(){

    int arr[6] ={3,7,2,2,7,3,4};
    cout<<"Unquie value is: "<<findUniqueArr(arr,7);

}

/*

Step Current ans Current array element	ans ^ arr[i] result	Explanation
1	0	3	        0 ^ 3  = 3	                    0 XOR anything is that number
2	3	7	        3 ^ 7  = 4	                    0011 ^ 0111 = 0100 (binary) → 4
3	4	2	        4 ^ 2  = 6	                    0100 ^ 0010 = 0110 → 6
4	6	2	        6 ^ 2  = 4	                    0110 ^ 0010 = 0100 → 4 (because 2 cancels)
5	4	7	        4 ^ 7  = 3	                    0100 ^ 0111 = 0011 → 3 (7 cancels)
6	3	3	        3 ^ 3  = 0	                    0011 ^ 0011 = 0000 → 0 (3 cancels)
7	0	4	        0 ^ 4  = 4	                    0 XOR 4 = 4 (unique value remains)
*/