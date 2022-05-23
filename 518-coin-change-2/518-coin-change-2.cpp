class Solution {
public:
    int cc(vector<int>& coins,vector<vector<long long int>>&dp,long long int target,long long int i)
    {
        if(i==0)
        {
            if(target%coins[i]==0)return 1;
            else
            {
                return 0;
            }
        }
        if(dp[i][target]!=-1)return dp[i][target];
        
        
        
        
        long long int nt= cc(coins,dp,target,i-1);
        long long int t= 0;
        
        if(coins[i]<=target)
        {
            t= cc(coins,dp,target-coins[i],i);
        }
        
       return dp[i][target]=nt+t;
        
        
    }
    
    
    
    
    
    
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        
        vector<vector<long long int>>dp(n,vector<long long int>(amount+1,-1));
        long long int min=  cc(coins,dp,amount,n-1);
        
         
        
       
     
        return min;
        
    }
};