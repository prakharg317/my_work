// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
  
    long long int cc(int s[], vector<vector<long long int>>&dp, int tar, int i)
    {
        if(i==0)
        {
            return(tar % s[0]==0);
        }
        
        if(dp[i][tar]!=-1)return dp[i][tar];
        
        long long int nt= cc(s,dp,tar,i-1);
        long int take=0;
        
        if(s[i]<=tar)
        {
            take= cc(s,dp,tar-s[i],i);
        }
        return dp[i][tar]= take+nt;
    }
    long long int count(int s[], int m, int tar) {

      vector<vector<long long int>>dp(m,vector< long long int>(tar+1,-1));
     
      return cc(s,dp, tar, m-1);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends