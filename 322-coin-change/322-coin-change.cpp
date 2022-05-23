class Solution {
public:
    int cc(vector<int>& coins,vector<vector<long long int>>&dp,long long int target,long long int i,long long int x)
    {
        if(i==0)
        {
            if(target%coins[i]==0)return (target/coins[i]);
            else
            {
                return 1e9;
            }
        }
        if(dp[i][target]!=-1)return dp[i][target];
        
        
        
        
        long long int nt= 0+cc(coins,dp,target,i-1,x);
        long long int t= 1e9;
        
        if(coins[i]<=target)
        {
            t= 1+ cc(coins,dp,target-coins[i],i,x);
        }
        
       return dp[i][target]=min(t,nt);
        
        
    }
    
    
    
    
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        
        vector<vector<long long int>>dp(n,vector<long long int>(amount+1,-1));
        
        long long int x= pow(2,31);
        x=x-1;
        
       long long int min=  cc(coins,dp,amount,n-1,x);
        if(min>=1e9)
        {
            return -1;
        }
         
        
       
     
        return min;
    }
};