class Solution {
public:
    int cs(int sum, vector<int>& nums, int &target,int &ans,vector<int>&dp )
    {
        
           if(sum==target)
           {
               ans++;
               return 1;
           }
           if(sum>target )return 0;
        if(dp[sum]!=-1)return dp[sum];
            int res=0;
            for(int j=0; j<nums.size(); j++)
            {
               res= res+cs(sum+nums[j],nums,target,ans,dp);
     
            }
        return dp[sum]=res;
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        
        int ans=0;
        vector<int>dp(target+1,-1);
       
        return  cs(0,nums,target,ans,dp);
        
    }
};