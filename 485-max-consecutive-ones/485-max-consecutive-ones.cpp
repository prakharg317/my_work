class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int i=0;
        int res=0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                count++;
                if(count>res)
                {
                    res=count;
                }
                i++;
            }
            
            else
            {
                i++;
                count=0;
            }
        }
        return res;
    }
};