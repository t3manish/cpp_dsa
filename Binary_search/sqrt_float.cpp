#include<iostream>
using namespace std;

/*
Loop for each precision:
Iteration 1 (i = 0):
factor /= 10 → factor = 0.1
Now increment ans by 0.1 until (ans + 0.1)^2 > 37

Inner while loop incrementing ans:
Step	ans before	ans + factor	(ans + factor)^2	Condition (<= 37)?	ans after
1	6.0	6.1	6.1^2 = 37.21	No (37.21 > 37)	6.0
The condition fails on first trial, so ans stays at 6.0.


Iteration 2 (i = 1):
factor /= 10 → factor = 0.01
Increment ans by 0.01 until (ans + 0.01)^2 > 37
Step	ans before	ans + factor	(ans + factor)^2	Condition (<= 37)?	ans after
1	6.0	6.01	6.01^2 = 36.1201	Yes	6.01
2	6.01	6.02	6.02^2 = 36.2404	Yes	6.02
3	6.02	6.03	6.03^2 = 36.361	Yes	6.03
4	6.03	6.04	6.04^2 = 36.4816	Yes	6.04
5	6.04	6.05	6.05^2 = 36.6025	Yes	6.05
6	6.05	6.06	6.06^2 = 36.7236	Yes	6.06
7	6.06	6.07	6.07^2 = 36.8449	Yes	6.07
8	6.07	6.08	6.08^2 = 36.9664	Yes	6.08
9	6.08	6.09	6.09^2 = 37.0881	No (37.0881 > 37)	6.08
Loop stops; ans = 6.08.


Iteration 3 (i = 2):
factor /= 10 → factor = 0.001
Increment ans by 0.001 until (ans + 0.001)^2 > 37
Step	ans before	ans+factor	(ans+factor)^2	Condition (<= 37)?	ans after
1	6.08	6.081	6.081^2=36.997	Yes	6.081
2	6.081	6.082	6.082^2=37.010	No (37.010 > 37)	6.081
Loop stops; ans = 6.081.
Final result:
morePrecision returns 6.081 as the approximate square root of 37 up to 3 decimal places.

*/

long long int sqrtInteger(int n) {
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

    double morePrecision(int n, int precision, double tempSol){
        //I want float .001 because of precision 3
        // simple is 37 <= 37
        //means ans*ans <= 37
        //then return ans as double
        double factor =1;
        double ans = tempSol;
        for (int i = 0; i < precision; i++)
        {
            factor /= 10;
            //0.1
            //0.01 
            //0.001

            //YT class one
            // for (int j = ans; j*j < n; j=j+factor)//6 6*6 < 36 False no increment
            // {
            //      ans = j;
            // }

            //gpt
            // Increment ans by factor until (ans + factor)^2 > n
            while ((ans + factor) * (ans + factor) <= n) {//here we can do with only ans but why + factor
                //Cause 6.01*6.01 we are dealing with float its should be precised value
                ans += factor;
        }
            
        }
        return ans;
        
    }

    int main()
    {
        int n;
        cout <<"Enter n: ";
        cin>>n;

        int tempSol =sqrtInteger(n);
        cout << "Answer is "<< morePrecision(n,3,tempSol)<<endl;

        return 0;
    }
    