#include<iostream> // This allows us to use input and output, like showing messages on the screen
#include<vector>   // This lets us use vectors, which are like lists that can hold many numbers
using namespace std; // This means we don't have to write "std::" before things like cout or vector


/*
Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
[12] and [34, 67, 90] Maximum Pages = 191
[12, 34] and [67, 90] Maximum Pages = 157
[12, 34, 67] and [90] Maximum Pages = 113.
Therefore, the minimum of these cases is 113, which is selected as the output.

Input: arr[] = [15, 17, 20], k = 5
Output: -1
Explanation: Allocation can not be done.

Input: arr[] = [22, 23, 67], k = 1
Output: 112

For Input : 12 34 67 90 2 Your Code's output is: 35 It's Correct output is: 113 Output Difference: 35 !=113
Once CHECK!!!!
*/

// This function checks if it's possible to divide books among students so no one gets too many pages
bool isPossible(vector<int> & arr, int n , int m, int mid){
    int studentCount = 1;  // We start by giving books to the first student
    int pageSum = 0;       // This will keep track of how many pages we gave to the current student

    // We check every book one by one
    for (int i = 0; i < n; i++)
    {
        // If adding this book's pages to the current student's pages doesn't go over the limit (mid)
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i]; // Give this book to the current student
        }
        else{
            studentCount++; // We need to give books to the next student now
            // If number of students used is more than allowed or a book has more pages than the max allowed (mid)
            // then it's not possible to split like this
            if (studentCount > m || arr[i] > mid)
            {
                return false; // Return false meaning "No, it's not possible"
            }
            // Start counting pages for the new student with the current book
            pageSum = arr[i];
        }

        // If students needed is more than allowed, also return false
        if (studentCount > m)
        {
            return false;
        }
    }
    // If we have assigned all books without problems, return true
    return true;
}

// This function tries to find the best way to split the books so that the maximum pages any student gets is as small as possible
int searchSpace(vector<int> & arr, int n , int m){
    int s = 0;   // Start of our search range (min pages)
    int e = 0;   // End of our search range (max pages)
    int ans = 0; // This will store our final answer
    int sum = 0; 

    // First, we add up all the pages to know the biggest sum possible
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i]; // Add books one by one, so if books have 10, 20, 30, 40 pages, sum = 100
        //Optimize
        //s = max(s,arr[i])//GPT why to search from 0
    }
    e = sum; // The biggest max pages can be when one student reads all the books

    // Now we use binary search between s and e to find the best maximum pages
    while (s < e)
    {
        int mid = s + (e - s)/2; // Find the middle of current range — this is our guess for max pages per student

        // Check if we can give books to students so that no one gets more than mid pages
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;    // If yes, this could be our answer
            e = mid - 1;  // Try to find if there's a smaller max pages possible by decreasing the upper limit
        }
        else{
            s = mid + 1;  // If not possible, try a bigger max pages by increasing the lower limit
        }
    }
    return ans; // Return the smallest max pages we found
}

int main()
{
    vector<int> arr = {10, 20, 30, 40}; // These are the pages in each book
    int n = 4; // Number of books
    int m = 2; // Number of students

    // Call the function to find the best way to split books and print the answer
    cout << "The answer is " << searchSpace(arr, n, m); 

    return 0; // End the program
}

/*
We want to give books to students so each student reads some books.
We try to make sure no student has too many pages.
We guess a maximum number of pages (mid).
Then we check if it's possible to give books to students without anyone getting more than mid pages.
We keep guessing smaller or bigger values until we find the best answer.

Constraints
1<= T <=50
2 <= M <= N <= 10^3
1 <= A[i] <= 10^9
sum of all not more than 10^9



Step	s (start)	e (end)	mid (guess max pages)	Is Possible?	Explanation
1	    0	        100	    50	                        No	        3 students needed; 2 students not enough with max 50 pages
2	    51	        100	    75	                        Yes	        2 students enough (<75 pages max)
3	    51	        74	    62	                        Yes	        2 students enough (<62 pages max)
4	    51	        61	    56	                        No	        Need 3 students; too low for max pages 56
5	    57	        61	    59	                        No	        Need 3 students; too low for max pages 59
6	    60	        61	    60	                        Yes	        2 students enough (<60 pages max)
7	    60	        59	    -	                        -	        Loop stops because s > e
Result				60	Minimum max number of pages a student reads

*/