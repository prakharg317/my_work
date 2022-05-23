class Solution {
public:
    int fts(vector<int>& nums,long long int target ,int i )
    {
        if(i==nums.size())
        {
            if(target==0)return 1;
            
            
        }
        
        if(i>=nums.size())return 0;
        
        //if(dp[i][target]!=-1)return dp[i][target];
        
        long long int minus= fts(nums,target-nums[i],i+1);
        long long int plus=  fts(nums,target+ nums[i],i+1);
        
        return minus+plus;
    }
    
    
    
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
       // vector<vector<long long int>>dp(nums.size(),vector<long long int>(target+1,-1));
        long long int res= fts(nums,target,0);
        
        return res;
        
    }
};