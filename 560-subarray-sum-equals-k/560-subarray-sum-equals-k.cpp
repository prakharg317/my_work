class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        mp[nums[0]]=0;
        for(int i=1; i<nums.size(); i++)
        {
            nums[i]+=nums[i-1];
            //mp[nums[i]]=i;
        }
        
        int count=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==k)
            {
                count++;
                //continue;
                
            }
            
            if(mp.find(nums[i]-k)!=mp.end())
            {
                count+=mp[nums[i]-k];
            }
            
            mp[nums[i]]++;
        }
        
        return count;
    }
};