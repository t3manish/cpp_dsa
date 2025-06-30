#include<iostream>
#include <cmath>
using namespace std;

//Linear search
bool linearSearch(int arr[] , int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        
    }
    return 0;
    
}

main(){
    cout<<"Enter Size: ";
    int size;
    cin>>size;

    int num[100];

    //for loop for inputs
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }

    int key;
    cout<<endl;
    cout<<"Enter key: "<<endl;
    cin>>key;

    // cout<<"The linear search is: "<< linearSearch(num, size,key);

    if(linearSearch(num, size,key)){
        cout<<"The linear search key is present"<<endl;
    }
    else{
        cout<<"The linear search key is absent"<<endl;
    }
}