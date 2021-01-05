Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output: 0 0 1 2 2
Explanation: 0s 1s and 2s are segregated 
into ascending order.
 

Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output: 0 0 1
Explanation: 0s 1s and 2s are segregated 
into ascending order.

Your Task:
You don't need to read input or print anything. Your task is to complete the function sort012() that takes array and n as input parameters and sorts the array in-place. 


Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 10^5
0 <= A[i] <= 2


// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    // coode here 
    int z{},o{},t{};
    for(int i{};i<n;i++)
    {
        if(a[i]==0)
        {
            z++;
        }
        else if(a[i]==1)
        {
            o++;
        }
        else
        {
            t++;
        }
    }
    for(int i{};i<n;i++)
    {
        if(z>0)
        {
            a[i]=0;
            z--;
        }
        else if(o>0)
        {
            a[i]=1;
            o--;
        }
        else
        {
            a[i]=2;
            t--;
        }
    }
}
