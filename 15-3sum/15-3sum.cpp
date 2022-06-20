class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map<vector<int>,int>mp;
        
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        if(nums.size()==0  ||  nums[0]>0)return ans;
        
        for(int i=0;i<nums.size();i++)
        {
            if(( i>0)  && (nums[i]==nums[i-1]))
            {
                continue;
            }
            vector<int>v;
            int sum=nums[i];
            
            int j=i+1;
            int k=nums.size()-1;
            
            while(j<k)
            {
                
               if((sum+nums[j]+nums[k])==0)
               {
                   v.push_back(sum);
                   v.push_back(nums[j]);
                   v.push_back(nums[k]);
                   if(mp.find(v)==mp.end()){
                    ans.push_back(v);
                    mp.insert({v,i});
                      }
                   v.clear();
                  
                   j++;
                   continue;
               }
                
               else if((nums[j]+nums[k])<=sum)
               {
                   break;
               }
                
               else if((sum+nums[k]+nums[j])>0)
               {
                   k--;
                   continue;
                   
               }
                
                else if(nums[j]+nums[k]>sum)
                {
                    j++;
                    continue;
                }
                
                
            }
            
            
        }
        
        
        
        return ans;
    }
};