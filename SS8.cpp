Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output: -1

Explanation: Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
Example 2:

Input:
N = 5 
A[] = {3,1,3,3,2} 
Output: 3
Explanation: Since, 3 is present 
more than N/2 times, so it is 
the majority element.
Your Task:
The task is to complete the function majorityElement() which returns the majority element in the array. If no majority exists, return -1.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 107
0 <= Ai <= 106

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int arr[], int n)
{
    int m{n/2},count{1},element=arr[0];
    
    for(int i{1};i<n;i++)
    {
        if(count==0)
        {
        element=arr[i];
        }
        if(arr[i]==element)
        {
            count++;
        }
        else
        {
        count--;
        }
        
        //  else (m == A[j]) ? i++ : i--;
    }
    
    int c{};
    for(int i{};i<n;i++)
    {
        if(arr[i]==element)
        {
            c++;
            
        }
    }
    if(c>m)
    {
        return element;
    }
    else
    {
        return -1;
    }
    // your code here
    
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
