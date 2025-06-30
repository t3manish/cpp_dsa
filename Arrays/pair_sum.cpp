#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// pair sum
vector<vector<int>> pairSum(vector<int> &arr, int s){

    vector<vector<int>> ans;//2d vector (1,4) and (2,3)
    for (int i = 0; i < arr.size(); i++)
    {
        // start j from i+1 to avoid duplicates and self-pairing
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));//1,4 min is 1 reversed also doesnt matter we are using min and max
                temp.push_back(max(arr[i], arr[j]));//1,4 max is 4
                ans.push_back(temp);//store both values a pairs in ans 2d vector
            }
        }
    }
    sort(ans.begin(), ans.end());//sorted
    return ans;
}

int main(){

    vector<int> arra = {1, 2, 3, 4, 5};

    vector<vector<int>> pairs = pairSum(arra, 5);

    cout << "Pairs with sum 5 are: ";
    for (const auto &pair : pairs) {//?
        cout << "(" << pair[0] << "," << pair[1] << ") ";
    }
    cout << endl;

    return 0;
}
