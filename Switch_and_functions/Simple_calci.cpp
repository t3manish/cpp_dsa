#include<iostream>
#include <cmath>
using namespace std;

// + - * / ^ % using switch
main(){
    cout<<"Enter a: ";
    int a,b;
    cin >> a;
    cout<<"Enter b:";
    cin >> b;

    cout<<" Enter Operation"<<endl;
    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout<< (a+b) << endl;
        break;

    case '-':
        cout<< (a-b) << endl;
        break;
    
    case '*':
        cout<< (a*b) << endl;
        break;

    case '/':
        cout<< (a/b) << endl;
        break;

    case '%':
        cout<< (a%b) << endl;
        break;

    case '^':
        cout<< (a^b) << endl;
        break;
    
    default:
        break;
    }
}
