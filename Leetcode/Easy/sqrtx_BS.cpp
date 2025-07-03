#include <iostream>
using namespace std;

class Solution {
    long long int binarySearch(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;

        int s = 0, e = n - 1;
        long long int ans = -1;

        while (s <= e) {
            long long int mid = s + (e - s) / 2;
            long long int square = mid * mid;

            if (square == n) {
                return mid;
            }
            else if (square < n) {
                ans = mid;
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
        }
        return ans;
    }

public:
    int mySqrt(int x) {
        return binarySearch(x);
    }
};

int main() {
    Solution sol;
    int x;

    cout << "Enter number to find integer square root: ";
    cin >> x;

    int result = sol.mySqrt(x);
    cout << "Integer square root of " << x << " is " << result << endl;

    return 0;
}
