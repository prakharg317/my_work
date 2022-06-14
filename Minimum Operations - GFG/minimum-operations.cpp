// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int mo(long long int i, vector<int>&dp)
    {
        if(i==0)
        {
            return 0;
        }
        if(dp[i]!=-1)return dp[i];
        
        int d=INT_MAX;
        if(i%2==0)
        {
            d=1+mo(i/2,dp);
        }
        int ad=1+mo(i-1,dp);
        return dp[i]= min(d,ad);
    }
    
    
    
    int minOperation(int n)
    {
        vector<int>dp(n+1,-1);
        int ans=mo(n,dp);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}  // } Driver Code Ends