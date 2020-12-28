// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > fourSum(vector<int> &a, int k);

// Position this line where user code will be pasted.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<vector<int> > ans = fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// arr[] : int input array of integers
// k : the quadruple sum required
vector<vector<int> > fourSum(vector<int> &arr, int X) {
    // Your code goes here
   /* int l,r;
    vector<vector<int> > answer;
    sort(arr.begin(),arr.end());
    for(int i{};i<arr.size()-3;i++)
    {
        for(int j{i+1};j<arr.size()-2;i++)
        {
            l=j+1;
            r=arr.size()-1;
            
            while(l<r)
            {
                if(arr[i]+arr[j]+arr[k]+arr[l] == k)
                {
                    vector<int> x;
                    x.push_back(arr[i]);
                    x.push_back(arr[j]);
                    x.push_back(arr[l]);
                    x.push_back(arr[r]);
                    answer.push_back(x);
                    l++,r--;
                }
                else if(arr[i]+arr[j]+arr[k]+arr[l] < k)
                {
                    l++;
                }
                else
                {
                    r--;
                }
                
            }
        }
    }
    return answer;*/
    vector<vector<int> > res;
int l, r;
int n=arr.size();
sort (arr.begin(),arr.end());
//res.erase(unique(res.begin(),res.end()), res.end());
for (int i = 0; i < n - 3; i++) {
for (int j = i+1; j < n - 2; j++) {
l = j + 1;
r = n-1;
while (l < r) {
vector<int> res1;
if( arr[i] + arr[j] + arr[l] + arr[r] == X)
{
res1.push_back(arr[i]);
res1.push_back(arr[j]);
res1.push_back(arr[l]);
res1.push_back(arr[r]);
l++; r--;
res.push_back(res1);
}
else if (arr[i] + arr[j] + arr[l] + arr[r] < X)
{l++;}
else
{r--;}
}
}
}
sort (res.begin(),res.end());
res.erase(unique(res.begin(),res.end()), res.end());
return res;
}
