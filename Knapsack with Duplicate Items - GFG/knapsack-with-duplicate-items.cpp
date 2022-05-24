// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
   int ks(vector<vector<int>>&dp,int *val,int *wt, int w,int i)
   {
       if(i==0)
       {
           if(wt[i]<=w)
           {
               return (w/wt[i])*val[i];
           }
           else
           {
               return 0;
           }
       }
       
       if(w<0)
       {
           return 0;
       }
       
       
       
       if(dp[i][w]!=-1)return dp[i][w];
       
       int nt= 0+ks(dp,val,wt,w,i-1);
       int t=INT_MIN;
       
       if(wt[i]<=w)
       {
           t=val[i]+ ks(dp,val,wt,w-wt[i],i);
       }
       
       return dp[i][w]= max(nt,t);
       }


    



    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
        
        int res= ks(dp,val,wt,W,N-1);
        return res;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}  // } Driver Code Ends