class Solution {
public:
    
    int iscycle(int i, vector<int> adj[],vector<int> &vis, vector<int>&dfsvis)
    {
        vis[i]=1;
        dfsvis[i]=1;
        for(auto it: adj[i])
        {
            if(vis[it]==0)
            {
                if (iscycle(it, adj,vis,dfsvis) )return 1;
            }
            
            else
            {
                if(dfsvis[it]==1)return 1;
                //return 1;
            }
        }
        dfsvis[i]=0;
        cout<<i<<" ";
        return 0;
        
        
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int> adj[n];
        vector<int> vis(n,0);
        vector<int>dfsvis(n,0);
        for(int i=0; i<pre.size(); i++)
        {
           adj [pre[i][1]] .push_back(pre[i][0]);
        }
        
        for(int i=0; i<n; i++)
        {
              if(vis[i]==0){
               int  x= iscycle(i,adj,vis,dfsvis);
               if(x==1)return false;   
              }
            
        }
        
        
        
       return true; 
    }
};