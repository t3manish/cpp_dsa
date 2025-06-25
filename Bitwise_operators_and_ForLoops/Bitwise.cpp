#include<iostream>
using namespace std;

main(){
    int a=2,b=3;
    cout<< (a&b) << endl;//2
    cout<< (a|b) << endl;//3
    cout<< (~b) << endl;//-4
    cout<< (a^b) << endl;//1

    int x=1,y=2;
    if(x-->0 || ++y>2){
        cout << "Stage1"<<endl;
    }
    else{
        cout << "Stage2"<<endl;
    }
    cout <<x <<" "<<y <<endl;
}