// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

int maxMeetings(int *, int *, int);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        int ans = maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}// } Driver Code Ends

struct meeting
{
  int start;
  int end;
  //int pos;
};

bool compare(struct meeting m1, meeting m2) 
{ 
    return (m1.end < m2.end); 
} 

int maxMeetings(int start[], int end[], int n) {
    // Your code here
    int count{};
    struct meeting meet[n];
    for(int i{};i<n;i++)
    {
        meet[i].start=start[i];
        meet[i].end=end[i];
        //meet[i].pos=1;
    }
        sort(meet,meet+n,compare);
        /*    for(int i{};i<n;i++)
            {
                cout<<meet[i].start<<"-"<<meet[i].end<<" ";
            } */
    if(n>0)
    {
        count++;
        int ms{meet[0].start},me{meet[0].end};
        for(int i{1};i<n;i++)
        {
            if(meet[i].start>me)
            {
                count++;
                me=meet[i].end;
            }
        }
    }
    return count;

}
