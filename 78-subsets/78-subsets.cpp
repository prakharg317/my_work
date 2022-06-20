class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        
        int n=nums.size();
        int x= pow(2,n)-1;
        
        for(int i=0;i<=x;i++)
        {
            int a=i;
            vector<int>v;
            if(i==0)
            {
                ans.push_back(v);
                continue;
            }
            int count=0;
            while(a)
            {
                if(a&1)
                {
                    v.push_back(nums[count]);
                    
                }
                count++;
                a=a>>1;
            }
            
            ans.push_back(v);
        }
        return ans;
    }
};