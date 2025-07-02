#include<iostream>
using namespace std;

// --------------------------------------------------------------------
// 5 11 13 17 19 27
// 0  1  2  3  4  5
//key 27
//start=0 and end=5 index /2 then we will get mid value
//when mid value is index 2 then value is 13

//13 != 27 then //so 27 key value is high
//13 < 27 //we have to take right side values
//so incremented start is 0 ,start = mid+1 means 2+1 =3----------------
//17 19 27
//3  4  5

//again mid value
//start+end/2 => 3+5/2 =>index 4

//17 != 27 then //so 27 key value is higher than 17
//17 < 27 // if its not equals to the value then get to rightside
////so incremented start is 3 ,start = mid+1 means 4+1 =5--------------
//27 == 27
//return index 5
// ---------------------------------------------------------------

// --------------------------------------------------------------------
// 4  8  16  22  34
// 0  1  2   3   4
//key 4
//start=0 and end=4 index /2 then we will get mid value
//when mid value is index 2 then value is 16

//16 != 4 then //so 4 key value is lower
//4 < 16 //we have to take left side values
//so decremented end is at 4 ,end = mid-1 means 2-1 =1----------------
//4 8
//0 1

//again mid value
//start+end/2 => 0+1/2 =>index 0

//4 == 4
//return index 4
// ---------------------------------------------------------------

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    
    while (start <=end)//start<=end index end should be greater than high
    {
        int mid = (start+end)/2;//mid values are not updated outside of the loop
        //optimize start + (end- start)/2
        if (arr[mid] == key)
        {
            return mid;//returning index value
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        
        
    }
    return -1;
    
}


main(){

    int oddNumber[5] ={4,8,16,22,24};
    int evennumber[6] ={5,11,13,17,19,27};

    int oddprint = binarySearch(oddNumber,5,4);
    cout<<"Odd array index value is "<<oddprint<<endl;

    int evenprint = binarySearch(evennumber,6,27);
    cout<<"even array index value is "<<evenprint<<endl;

}

