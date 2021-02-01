// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends

bool compare(struct Job j1, Job j2) 
{ 
    return (j1.profit > j2.profit); 
} 
// Prints minimum number of platforms reqquired 

pair<int,int> JobScheduling(Job arr[], int n) 
{ 
    // your code here
    int sum{},count{};
    int slot[n]{};
    sort(arr,arr+n,compare);
    /* for(int i{};i<n;i++)
    {
        cout<<arr[i].dead<<" "<<arr[i].id<<" "<<arr[i].profit<<"\n";
    } */
    /* Decode the below code again*/ 
    for(int i{};i<n;i++)
    {
        for(int j=min(n, arr[i].dead)-1; j>=0; j--)
        {
            if(slot[j]==0)
            {
                slot[j]=1;
                
                count++;
                sum += arr[i].profit;
                
                break;
            }
        }
    } 
    /*
    17
1 56 288 2 27 435 3 67 401 4 64 368 5 94 248 6 54 361 7 43 108 8 96 167 9 73 251 10 96 170 11 14 156 12 78 184 13 61 370 14 77 424 15 68 397 16 40 375 17 36 218

Its Correct output is:
17 4921

And Your Code's output is:
16 4765

    for(int i{};i<n;i++)
    {
        for(int j=0; j<arr[i].dead; j++)
        {
            if(slot[j]==0)
            {
                slot[j]=1;
                
                count++;
                sum += arr[i].profit;
                
                break;
            }
        }
    }  */
    return make_pair(count,sum);
} 



// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        //function call
        pair<int,int> ans = JobScheduling(arr, n);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
	return 0; 
}


  // } Driver Code Ends
