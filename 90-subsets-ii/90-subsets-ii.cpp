class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>>ans;
        map<vector<int>,int>mp;
        
        int n=nums.size();
        int x= pow(2,n)-1;
        
        for(int i=0;i<=x;i++)
        {
            vector<int>v;
            if(i==0)
            {
                ans.push_back(v);
                mp.insert({v,i});
                continue;
            }
            
            int count=0;
            int a=i;
            while(a)
            {
                if(a&1)
                {
                    v.push_back(nums[count]);
                }
                count++;
                a=a>>1;
            }
            
            if(mp.find(v)==mp.end())
            {
                ans.push_back(v);
                mp.insert({v,i});
            }
        }
        return ans;
    }
};