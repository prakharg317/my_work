class Solution {
public:
    bool dfs(vector<int> *g,int in,vector<bool> &vis,int parent)
    {
        if(vis[in])
            return 0;
        
        vis[in]=1;
        int n=g[in].size();
        int i;
        
        for(i=0;i<n;i++)
        {
            if(g[in][i]!=parent && !dfs(g,g[in][i],vis,in))
                return 0;
        }
        
        return 1;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        int n=e.size();
        int i;
        vector<int> g[n+1];
        
        for(i=0;i<n;i++)
        {
            vector<bool> vis(n+1,0);
            
            g[e[i][0]].push_back(e[i][1]);
            g[e[i][1]].push_back(e[i][0]);
            
            if(!dfs(g,e[i][0],vis,-1))
                return e[i];
        }
        return {};
        
    }
};