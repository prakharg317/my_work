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
            
            
            
            //cout<<it<<"->"<<count<<endl;
        }
    }
    
    
    int makeConnected(int n, vector<vector<int>>& con) {
        int m= con.size();
        if(m<(n-1))return -1;
        
        
        vector<int>vis(n,0);
        vector<int>adj[n];
        for(int i=0; i<con.size(); i++)
        {
            int x= con[i][0];
            adj[x].push_back(con[i][1]);
            adj[con[i][1]].push_back(x);
        }
        
        for(int i=0; i<n; i++)
        {
           if(vis[i]==0)
           {
               count++;
               dfs(i,vis,adj);
               
           }
        }
        
        return count-1;
        
        
        
    }
};