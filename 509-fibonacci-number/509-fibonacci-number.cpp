class Solution {
public:
    int fb(int n,   int dp[])
    {
       if(n<=1)
        {
            return n;
        }
        
        
            if(dp[n]!=-1)
            {
                return dp[n];
            }
            
            
            return dp[n]= (fb(n-1,dp)+fb(n-2,dp));
        
        
        
        
    } 
    
    
    
    int fib(int n) {
        
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        
        int res= fb(n,dp);
        return res;
    }
        
};