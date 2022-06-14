class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        if(nums.size()==0)return ans;
        
        long long low=0;
        long long high=nums.size()-1;
        long long int mid;
        
        while(high-low>1)
        {
            mid=(low+high)/2;
            
            if(nums[mid]>=target)
            {
                high=mid;
            }
            
            else
            {
                low=mid+1;
            }
        }
        if(nums[low]==target)ans[0]=low;
        else if(nums.size()>1 &&   nums[low+1]==target)ans[0]=low+1;
         
        //if(nums.size()>1  &&  nums[low]!=target  && nums[low+1]!=target)ans[0]=-1;
        else ans[0]=-1;
        
        
        low=0;
         high=nums.size()-1;
        
        
        while(high-low>1)
        {
            mid=(low+high)/2;
            
            if(nums[mid]<=target)
            {
                low=mid+1;
            }
            
            else
            {
                high=mid;
            }
        }
        if(nums[high]==target)ans[1]=high;
        else if(nums.size()>1  &&   nums[high-1]==target)ans[1]=high-1;
        else if(low>1 && nums[low-1]==target)ans[1]=low-1;
        
        //if(nums.size()>1   && nums[high]!=target  && nums[high-1]!=target)ans[1]=-1;
        else ans[1]=-1;
        
        return ans;
        
        
    }
};






