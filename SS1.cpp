/* Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Note: If the number x is not found in the array just print '-1'.

Input:
The first line consists of an integer T i.e number of test cases. The first line of each test case contains two integers n and x. The second line contains n spaced integers.

Output:
Print index of the first and last occurrences of the number x with a space in between.

Constraints: 
1<=T<=100
1<=n,a[i]<=1000

Example:
Input:
2
9 5
1 3 5 5 5 5 67 123 125
9 7
1 3 5 5 5 5 7 123 125

Output:
2 5
6 6
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T{},n{},x{},first=-1,last=-1;
	cin>>T;
	while(T>0)
	{
	    cin>>n>>x;
	    int arr[n];
	    for(int i{};i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i{};i<n;i++)
	    {
	        if(x==arr[i])
	        {first = i;
	        last =i;
	        for(int j{i+1};j<n;j++)
	        {
	            if(arr[j]!=x)
	            break;
	            last++;
	        }
	        cout<<first<<" " << last<<"\n";
	        break;
	        }
	        
	    }
	    if(first==-1)
	    cout<<-1<<"\n";
	    
	    T--;
	}

	return 0;
}
