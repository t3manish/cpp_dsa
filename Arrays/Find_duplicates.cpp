#include<iostream>
#include <cmath>
#include<vector>
using namespace std;

int findDupuArr(vector<int> &arr){
    int ans =0;
    for (int i = 0; i < arr.size(); i++)
    {// ans = 1 ^ 2 ^ 3 ^ 4 ^ 3
        ans = ans^arr[i];// XOR with values only unquie values remains
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans ^=i; // ans = previous_result ^ 1 ^ 2 ^ 3 ^ 4
    }
    return ans;
}

main(){
    vector<int> arr ={1, 2, 3, 4, 3};
    cout<<"The duplicate number is : "<< findDupuArr(arr)<< endl;
}