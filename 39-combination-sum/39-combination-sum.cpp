class Solution {
public:
    
    void com(int i, vector<vector<int>>&ans, int target,int n,vector<int>&cand,vector<int>v)
    {
       if(i>=n)
       {
           if(target==0)
           {
               ans.push_back(v);
               
           }
           
           return;
       }
        
        if(cand[i]<=target)
        {
           v.push_back(cand[i]);
           
           com(i,ans,target-cand[i],n,cand,v);
           v.pop_back();
            
        }
        
        com(i+1,ans,target,n,cand,v);
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    vector<vector<int>> combinationSum(vector<int>& cand, int target) 
    {
        vector<vector<int>>ans;
        int n=cand.size();
        vector<int>v;
        
        com(0,ans,target,n,cand,v);
        return ans;
        
        
    }
};