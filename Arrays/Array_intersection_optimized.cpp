#include<iostream>
#include <cmath>
#include<vector>
using namespace std;
//Optimized
// arr a =1,2,2,2,3,4
// arr b =2,2,3,3

//array intersection
vector<int> findArrayIntersection(vector<int> &arra, int n, vector<int> &arrb, int m ){
    vector<int> ans;
    int i =0, j=0;
    while (i<n && j<m)
    //0<6 && 0<4 T
    //1<6 && 0<4 T i=1
    //2<6 && 1<4 T i=2,j=1
    //3<6 && 2<4 T i=3,j=2
    //4<6 && 2<4 T i=4,j=2
    //5<6 && 3<4 T i=5,j=3
    //5<6 && 4<4 F BREAKS
    {
        if (arra[i] == arrb[j])
        //1 == 2 F
        //2 == 2 T
        //2 == 2 T
        //2 == 3 F
        //3 == 3 T
        //4 == 3 F
        {
            ans.push_back(arra[i]);
            //ans = 2
            //ans = 2 2
            //ans = 2 2 3
            i++;
            //1+1 ,i=1
            //2+1 ,i =2
            //4+1 ,i =4
            j++;
            //j+1 ,j=0
            //1+1 ,j=1
            //2+1. j=2
        }
        else if (arra[i] > arrb[j])
        //1 > 2 F
        //2 > 3 F
        //4 > 3 T
        {
            j++;
            //3+1, j=3
        }
        else{
        //i+1 =2
        //3+1 =4
            i++;
        }
        
        
    }
    return ans;// 2 2 3
    
}

main(){
    vector<int> arra = {1, 2, 2, 2, 3, 4};
    vector<int> arrb = {2, 2, 3, 3};

    vector<int> intersection = findArrayIntersection(arra, arra.size(), arrb, arrb.size());

    cout << "Intersection of arrays is: ";
    for (int num : intersection) {
        //for(int i=0; i<intersection.size(); ++i)
        //int num = intersection[i] <- traditional 
        //int num : intersection ->intersection is a vector<int>, a dynamic array of integers 
        //his is a range-based for loop, introduced in C++11
        cout << num << " ";

    }
    cout << endl;
    
    return 0;

}