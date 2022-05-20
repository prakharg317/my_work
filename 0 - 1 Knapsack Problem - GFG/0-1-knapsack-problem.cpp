// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int ks(vector<vector<int>>&dp, int *weight, int *value, int i,int w)
    {
        if(w==0)return 0; 
        if(i==0 && w>=weight[i])return value[i];
        if(i==0 && w<weight[i])return 0;
        
        if(dp[i][w]!=-1)return dp[i][w];
        
        int nt= 0+ ks(dp,weight,value,i-1,w);
        int t=INT_MIN;
        
        if(w>=weight[i])
        {
            t= value[i]+ ks(dp,weight,value,i-1,w-weight[i]);
        }
        
        return dp[i][w]=max(t,nt);
    }
    
    
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n,vector<int>(W+1,-1));
    //   map<int,int>mp;
    //   vector<int>weight;
    //   vector<int>value;
       
    //   for(int i=0 ; i<n; i++)
    //   {
    //       mp.insert({wt[i],val[i]});
    //   }
       
       
       
    //   for(auto it:mp)
    //   {
    //       weight.push_back(it.first);
    //       value.push_back(it.second);
    //   }
       
       int res= ks(dp,wt,val,n-1,W);
       
       return res;
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends