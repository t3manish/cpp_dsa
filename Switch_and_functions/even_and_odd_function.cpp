#include <iostream>
using namespace std;


bool isEven(int a){
    if(a&1){ //when condtion is 1 means true, so it will work
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    cout<<"Enter x: ";
    int x;
    cin >> x;   

    if(isEven(x)){// if it returns 1 then first condtion will print
        cout << "Number is Even"<<endl;//first condtion
    }
    else{
        cout<< "Number is Odd"<<endl;//second condtion
    }
}
