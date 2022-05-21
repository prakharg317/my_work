class Solution {
public:
    void dfs(int ind,vector<vector<int>>&ans, vector<int>&v, vector<vector<int>>& graph )
   {
        if(v.back()==graph.size()-1)
        {
            //return;
        }
        
        if(ind==graph.size()-1)
         {
             ans.push_back(v);
             //return;
         }
        
       
            if(ind<graph.size())
            {
               int i=ind;
              for(int j=0; j<graph[i].size(); j++)
             {
                v.push_back(graph[i][j]); 
                 dfs(graph[i][j],ans,v,graph);
                  
                  v.pop_back();
              } 
            }
           
           
           
           
       
   }
    
    
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
     vector<vector<int>>ans;
      vector<int>v;
        v.push_back(0);
        dfs(0,ans,v,graph);
        
            return ans;
        
    }
};