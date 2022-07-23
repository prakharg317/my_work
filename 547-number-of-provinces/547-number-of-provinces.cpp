class Solution {
public:
    int count=0;
    void dfs(int i, vector<int>&vis, vector<int>adj[] )
    {
        vis[i]=1;
        
        for(auto it:adj[i])
        {
            
            if(vis[it]==0)
            {
                dfs(it,vis,adj);
            }
            
            
            
        }
    }
    
    int findCircleNum(vector<vector<int>>& con) {
        
        int n= con.size();
        //if(m<(n-1))return -1;
        
        
        vector<int>vis(n+1,0);
        vector<int>adj[n+1];
        for(int i=0; i<con.size(); i++)
        {
           for(int j=0; j<con[i].size(); j++)
           {
               if(con[i][j]==1 && i!=j)
               {
                   adj[i+1].push_back(j+1);
               }
               
           }
        }
        
        for(int i=1; i<=n; i++)
        {
           if(vis[i]==0)
           {
               count++;
               cout<<i<<"->"<<count<<endl;
               dfs(i,vis,adj);
               
           }
        }
        //count=count-1;
        
        
        return count;
        
    }
};