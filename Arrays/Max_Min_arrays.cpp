#include<iostream>
#include <cmath>
using namespace std;
//5
//10 2 3 4 76

//Min
//Here previous value is larger than new value ,So it a min value
int getMinNumber(int num[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(min > num[i]){// see here > , 10 > 2
            min = num[i];
            //+1L > 10 T
            //min value changes to 10
            // 10 >2 T
            //min is 2
            //all condtions false
        }
    }
    return min;
    
}



//Max
//Previous value is less than new value, So it a max value
int getMaxNumber(int num[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(max < num[i]){// see here < ,1 < 2
            //-1 <10 T
            //max value is 10
            //10 < 2 F
            //10 < 3 F
            //10 < 4 F
            //10 <76 T
            //max value changes to 76
            max = num[i];
        }
    }
    return max;
    
}

int main()
{
    cout<<"Enter the number: ";
    int size;
    cin>>size;//array size eg 5


    int num[100];//dont give variable one its a bad practise 

    //input of array using for loop
    for (int i = 0; i < size; i++)
    {
       cin >>num[i];//eg. for 5 input ->here 0 1 2 3 4
    }
    // cout<<num[1]<<endl;

    cout << "Maximum Number: "<< getMaxNumber(num,size) << endl;
    cout << "Minimum Number: "<< getMinNumber(num,size) << endl;
    

    return 0;
}
