#include<iostream>
#include <cmath>
using namespace std;

bool findUniqueArr(int arr[], int n){
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];// XOR with values only unquie values remains
    }
    if(ans>0){//..1>0
        return ans =1;
    }
    return ans;
}

main(){

    int arr[2] ={1,2};//false ?
    // cout<<"Unquie value is: "<<findUniqueArr(arr,7);
    if(findUniqueArr(arr,2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}