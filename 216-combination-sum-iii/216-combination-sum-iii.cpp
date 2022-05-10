class Solution {
public:
    
    void comb(vector<vector<int>>&ans,vector<int>&v,int k,int n, int sum,int ind,vector<int>&num)
    {
        
            if(v.size()==k)
            {
               if(sum==n)
               { 
               ans.push_back(v);
               }
                
               return;
              }
           
            
           
          
       
        
        if(ind>8 || sum > n) return;
        
        for(int i=ind; i<9; i++)
        {
            v.push_back(num[i]);
            comb(ans,v,k,n,sum+num[i],i+1,num);
            v.pop_back();
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>>ans;
        if(k>n) return ans;
        
        vector<int>v;
        int sum=0;
        vector<int>num{1,2,3,4,5,6,7,8,9};
        
        comb(ans,v,k,n,sum,0,num);
        
        return ans;
        
    }
};