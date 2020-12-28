
#include <iostream>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	while(T--)
	{
	    int L{},N{},i{},found{};
	    cin>>L>>N;
	    int arr[L]{};
	    for(int j{};j<L;j++)
	    {
	        cin>>arr[j];
	    }
	    
	    //sort(arr,arr+L);
	    for(int j{};j<L;j++)
	    {
	        for(int k{j};k<L;k++)
	        {
	            if(abs(arr[j]-arr[k])==N)
	            {
	                cout<<1<<"\n";
	                found=1;
	                break;
	            }
	        }
	        if(found==1)
	        {
	            break;
	        }
	    }
	    if(found==0)
	    {
	    cout<<-1<<"\n";
	    }
	}
	return 0;
}
