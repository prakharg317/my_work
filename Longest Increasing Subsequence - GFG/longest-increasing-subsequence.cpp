// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int lis( vector<vector<int>>&dp, int i,int prev, int a[],int n)
    {
        if(i==n)return 0;
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];
        
        int len =0+ lis(dp,i+1,prev, a,n);
        
        if(prev==-1  || a[i]>a[prev])
        {
            len = max(len, 1+ lis(dp,i+1,i,a,n));
            
            
        }
        
       return dp[i][prev+1]=len;
                    
                
                
            
            
            
    }
    int longestSubsequence(int n, int a[])
    {
        vector<vector<int>>dp(n, vector<int>(n+1,-1));
        int x= lis(dp,0,-1,a,n);
        //return x;
        
        return x;
        
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}
  // } Driver Code Ends