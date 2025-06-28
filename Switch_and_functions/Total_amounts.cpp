#include <iostream>
using namespace std;
/*
Example step-by-step with amount 1330:
start x = 1330
i=0, note = 100
count = 1330 / 100 = 13
remainder x = 1330 % 100 = 30

i=1, note = 50
count = 30 / 50 = 0
remainder x = 30 % 50 = 30

i=2, note = 20
count = 30 / 20 = 1
remainder x = 30 % 20 = 10

i=3, note = 10
count = 10 / 10 = 1
remainder x = 10 % 10 = 0

i=4, note = 5
count = 0 / 5 = 0
remainder x = 0 % 5 = 0

i=5, note = 1
count = 0 / 1 = 0
remainder x = 0 % 1 = 0
*/

int main() {
    cout << "Enter the amount: " << endl;
    int x;
    cin >> x;

    int denominations[] = {100, 50, 20, 10, 5, 1};
    
    for (int i = 0; i < 6; i++) {
        int note = denominations[i];
        int count = x / note;
        x = x % note;

        switch (note) {
            case 100:
                cout << "100 NOTES: ";
                break;
            case 50:
                cout << "50 NOTES: ";
                break;
            case 20:
                cout << "20 NOTES: ";
                break;
            case 10:
                cout << "10 NOTES: ";
                break;
            case 5:
                cout << "5 NOTES: ";
                break;
            case 1:
                cout << "1 NOTES: ";
                break;
        }

        cout << count << endl;
    }

    return 0;
}
