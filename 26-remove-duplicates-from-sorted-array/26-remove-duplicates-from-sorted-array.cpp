class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=1;
        int j=0;
        int count=1;
        
        while(i<nums.size())
        {
           if(nums[i]==nums[i-1])
           {
               i++;
           }
            
            else
            {
                nums[j+1]=nums[i];
                i++;
                j++;
                count++;
            }
        }
        return count;
    }
};