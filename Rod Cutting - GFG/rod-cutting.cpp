// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
   int cr(vector<vector<int>>&dp, int * price, int i,int n)
   {
      if(i==0)
      {
          return price[0]*n;
      }
       
       
       if(dp[i][n]!=-1)return dp[i][n];
       
       
       int nt= 0+cr(dp,price,i-1,n);
       int t=INT_MIN;
       
       int rodlength=i+1;
       if(rodlength<=n)
       {
         t= price[i] + cr(dp,price,i,n-rodlength);  
       }
       
       
       
       return dp[i][n]=max(nt,t);
   }
  
  
  
  
    int cutRod(int price[], int n) {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        
        int res= cr(dp,price,n-1,n);
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends