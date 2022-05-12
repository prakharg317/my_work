class Solution {
public:
    
    void pm(vector<vector<int>>&ans, vector<int>&ds, vector<int>&nums)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        
        for(int i= 0; i<nums.size(); i++)
        {
            ds.push_back(nums[i]);
            pm(ans,ds,nums);
            ds.pop_back();
            
            // if(ds.size()==nums.size())
            // {
            //     ans.push_back(ds);
            //     //s.clear();
            //     return;
            // }
        }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        
        pm(ans,ds,nums);
        int flag=0;
        map<vector<int>,int>mp;
        
        for(int i=0; i<ans.size(); i++)
        {
            unordered_set<int> s;
            for(int j=0; j<nums.size(); j++)
            {
              s.insert(ans[i][j]);  
            }
                
                if(s.size()==nums.size())
                {
                  mp.insert({ans[i],i});  
                }
       }
        
        ans.clear();
        
        for(auto it :mp)
        {
           ans.push_back(it.first); 
        }
        
        return ans;
        
        
    }
};




































































































































































// class Solution {
// public:
//     int j=0;
//     //
//     void pm(vector<int> &ar, vector<vector<int>> &v1, vector<int> &ds,int mp[])
//     {
//         if(ds.size()==ar.size())
//         {
//             v1.push_back(ds);
//             //ds.clear();
//             return;
//         }
    
    
    
//     //if(ds.size() < ar.size())
//       for(int i=0; i<ar.size();i++)  
//     {
//         if(!(mp[i]))
//         {           
//            ds.push_back(ar[i]);
//            mp[i]=1;
//            pm(ar,v1,ds,mp);
//            mp[i]=0 ;
//            ds.pop_back();
//         }
        
//     }
        
        
        
        
//     }
    
// public:
//     vector<vector<int>> permute(vector<int>& nums) 
//     {
//         vector<vector<int>>v1;
//         //unordered_map<int,int>mp;
//         vector<int>ds;
//         int x=nums.size();
//         int mp[x];
//         for(int i=0; i<x;i++)
//         {
//             mp[i]=0;
//         }
//         pm(nums,v1,ds,mp);
//         return v1;
        
//     }
// };