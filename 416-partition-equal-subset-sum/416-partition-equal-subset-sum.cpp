class Solution {
public:
    bool ss(vector<int>& nums, vector<vector<int>>&dp, int i, int sum)
    {
        if(sum==0)return true;
        if(i==0) return(nums[0]==sum);
        
        if(dp[i][sum]!=-1)return dp[i][sum];
        
        bool nt= ss(nums,dp,i-1,sum);
        bool t=false;
        
        if(sum>=nums[i])
        {
            t= ss(nums,dp,i-1,sum-nums[i]);
        }
        
        return dp[i][sum]= nt|t;
    }

    
    
    
    
    
    
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
          sum=sum+nums[i];  
        }
        
        
        if(sum%2!=0)return false;
        sum/=2;
        vector<vector<int>>dp(nums.size()+1,vector<int>(sum+1,-1));

        
        return ss(nums,dp,nums.size()-1,sum); 
       
    }
};