#include<iostream>
#include <cmath>
#include<vector>
using namespace std;
//Not optimized
// arr a =1,2,3
// arr b =3,4

//array intersection
vector<int> findArrayIntersection(vector<int> &arra, int n, vector<int> &arrb, int m ){
    vector<int> ans;
    
    for (int i = 0; i < n; i++)
    {
        int element = arra[i];
        //element =1
        //element =2
        //element =3

        for (int j = 0; j < m; j++)
        {
            // if(element < arrb[j]){
            //     break;
            // 1 4 5
            // 3 4 5
            // 1 <3 its true then why need to check further 4 and 5 then break the condition

            if (element == arrb[j])
            //1 == 3 F
            //2 == 3 F
            //3 == 3 T
            //we need to minimize this lets have a if condtion
            {
                ans.push_back(element);
                //ans =3
                arrb[j] = -112231;
                //3 value stores -112231
                break;//so we have found it breaks
            }
        // }
            
        }
        
    }
    return ans;
    
}

main(){
    vector<int> arra = {1,2,3};
    vector<int> arrb ={3,4};

    // cout<<"Intersecting number in both arrays is: "<< findArrayIntersection(arra,3,arrb,2); //will get error

    vector<int> intersection = findArrayIntersection(arra, arra.size(), arrb, arrb.size());//stores the ans

    cout << "Intersecting numbers in both arrays are: ";
    for (int num : intersection) {//prints ans
        cout << num << " ";
    }
    cout << endl;

    return 0;



}