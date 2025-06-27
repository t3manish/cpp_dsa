#include<iostream>
#include <cmath>
using namespace std;
        // while(x!=0){
            // if(pow(2,i) == n){
            //     cout<< true;
            //     break;
            // }
            // if(pow(2,i) >= n){ //2>=16
            //     cout<< false;
            //     break;
            // }
            // x--;

        // }
        //-231 <= n <= 231 - 1
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>> n;
    bool found = false;
        for(int i =0; i<=30; i++){
            int ans= pow(2,i);//oe we can use ans =ans*2
            if (ans == n){
                found = true;
                cout << "true";
                break;
            }
        }
        if(!found){
            cout << "false";
        }
}