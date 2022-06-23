// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long mss( long long int i, vector<long long int>&dp, int n, int arr[],long long int prev)
    {
        if(i==n)return 0;
        
        if(dp[i]!=-1)return dp[i];
        
        //long long int ans=0;
        
        long long int t= arr[i]+ mss(i+1,dp,n,arr,prev);
        prev= max (t, prev );
        
        return dp[i]=prev;
    }
    long long maxSubarraySum(int arr[], int n){
        long long ans=INT_MIN;
        
        long long cs=0;
        
        for(int i=0;i<n;i++)
        {
            
            cs=cs+arr[i];
            long long int x=arr[i];
            cs= max(x,cs);
            ans=max(ans,cs);
        }
        return ans;
        
        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends