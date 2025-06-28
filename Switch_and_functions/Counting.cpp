#include <iostream>
using namespace std;

//using void
void PrintingCounts(int a){
    for (int i=1;i<=a;i++){
        cout<< i <<" ";
    }
    return;//still void returns the output
}

int main(){
    cout<<"Enter the number: ";
    int a;
    cin>> a;
    PrintingCounts(a);
}