class Solution {
public:
    int x=-1;
    void dfs(int i, int j ,vector<int>& edges,vector<int>&vis, unordered_map<int,int>&mp )
    {
        vis[i]=1;
        //cout<<i<<" ";
        if(mp.find(i)==mp.end())
        {
            mp[i]=j;
            //cout<<i<<"->"<<j<<",";
            j++;
        }
       
        
        if(edges[i] !=-1 && vis[edges[i]]==0)
        {
            dfs(edges[i],j,edges,vis,mp);
        }
         else
        {
             if(edges[i]!=-1 && mp.find(edges[i])!=mp.end())
             {
                //cout<<mp[edges[i]]<<" ";
                if(j-mp[edges[i]]>x) x= j-mp[edges[i]];
                
             }
              return;  
        }
    }
    
    int longestCycle(vector<int>& edges) {
        vector<int>vis(edges.size(),0);
        for(int i=0; i<edges.size(); i++)
        {
            if(vis[i]==0)
            {
                unordered_map<int,int>mp;
                int j=0;
                dfs(i,j,edges,vis,mp);
            }
        }
        return x;
    }
};