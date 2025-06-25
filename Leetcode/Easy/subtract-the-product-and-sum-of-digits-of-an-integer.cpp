#include <iostream>
using namespace std;

int main()
{
    int n =234;
    int sum=0;
    int pro=1;
    while(n!=0){
        int lastnum;
        lastnum =n%10;
        sum =  lastnum+ sum;
        pro = pro*lastnum;
        n=n/10;
    }
    cout<< "Sum of digits: " <<sum <<endl;
    cout<< "Product of digits: " <<pro <<endl;
    cout<< "Results: " <<(pro-sum) <<endl;
    return 0;
}