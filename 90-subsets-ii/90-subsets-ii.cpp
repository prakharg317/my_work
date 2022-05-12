class Solution {
public:
    void ss(vector<vector<int>>&ans, vector<int>&v,vector<int>&nums, int ind)
    {
        if(ind>=nums.size())
        {
            return;
        }
       
        v.push_back(nums[ind]);
         ans.push_back(v);
        ss(ans,v,nums,ind+1);
        v.pop_back();
        
        
         ans.push_back(v);
        ss(ans,v,nums,ind+1);
        
            
        
    }
    
    
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>v;
        
        
        ss(ans,v,nums,0);
        
        map<vector<int>, int>mp;
        
        for(int i=0; i<ans.size(); i++)
        {
            mp.insert({ans[i],i});
        }
        ans.clear();
        for(auto it:mp)
        {
            ans.push_back(it.first);
        }
        return ans;
        
    }
};




































































// class Solution {

//     public:
//     vector<int>ans;
//     //set<vector<int>>s;
//     void ss(int i, vector<int>&nums,vector<vector<int>>& v1, vector<int> &ds)
//     {
//         if(i==nums.size())
//         {  sort(ds.begin(),ds.end());
//                v1.push_back(ds);
//                 return;
//         }
        
//         if(i<nums.size())
//         {
//             ds.push_back(nums[i]);
//             ss(i+1,nums,v1,ds);
//             ds.pop_back();
//         }
        
//         //int x=i;
//         int x=i;
//          while(x<nums.size() && nums[i] == nums[x])
//          {
//              x++;
//          }
         
//         ss(x,nums,v1,ds);
//           //ds.pop_back();
        
        
//     }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
//     public:
//     set<vector<int>>s;
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) 
//     {
//         vector<vector<int>> v1;
//         vector<int>ds;
//         sort(nums.begin(),nums.end());
//         ss(0,nums,v1,ds);
        
//         for(int i=0; i<v1.size();i++)
//         {   
//            s.insert(v1[i]); 
//         }
        
//         v1.clear();
        
//         for(auto i:s)
//         {
//            v1.push_back(i);
//         }
        
        
        
//         return v1;
        
//     }
// };