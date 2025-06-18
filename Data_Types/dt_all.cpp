#include <iostream>
using namespace std;

main(){
    // int
    int a = 10;
    cout << a << endl;

    // char Here ASCII value 98 is b
    char x = 98;
    cout << x << endl;

    //float
    float y = 10.98;
    cout << y << endl;

    // double
    double r = 10657;
    cout << r << endl;

    //unsigned we use only postive values
    // when negative value given then 2's compliments applied
    // unsigned int t = -1;
    // cout << t << endl;

    //Realtional operators
     int p = 5, b = 10;

    cout << (a == b) << endl; // Output: 0 (false)
    cout << (a != b) << endl; // Output: 1 (true)
    cout << (a < b) << endl;  // Output: 1 (true)
    cout << (a > b) << endl;  // Output: 0 (false)
    cout << (a <= b) << endl; // Output: 1 (true)
    cout << (a >= b) << endl; // Output: 0 (false)

    //Logical Operators

    cout <<"Logical operators"<<endl;

    int n = 5, m = 10;
    cout << ((n != m) && (n < m)) <<endl;// Output: 1 (true)
    cout << ((n != m) || (n > m)) <<endl;// Output: 1 (true)
    cout << (n!=m) << endl;// Output: 1 (true)


}