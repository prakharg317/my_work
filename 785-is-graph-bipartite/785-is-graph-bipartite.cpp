class Solution {
public:
    bool ans=true;
    
    void dfs(int i,vector<vector<int>>& graph,vector<int>&col)
    {
        if(i==0)col[i]=1;
        for(auto it:graph[i])
        {
          if(col[it]==-1)
           {
              if(col[i]==1)
                {
                  col[it]=0;
                  dfs(it,graph,col);
                }
                           
                           
              else
              {
                  col[it]=1;
                  dfs(it,graph,col);
              }
          }
                        
          else
            {
             if(col[it]==col[i])ans=false;
            }
                        
        }
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>col(n,-1);
        
        for(int i=0; i<n; i++ )
        {
            if(col[i]==-1)
            {
                
                    
                dfs(i,graph,col);
            }
        }
        
        
        
        return ans;
       
        
        
    }
};