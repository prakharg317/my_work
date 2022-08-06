class Solution {
public:
    int y,an;
    void dfs(vector<int>adj[], unordered_map<int,int>&mp,vector<int>&vis,int i)
    {
        vis[i]=1;
        //cout<<i<<"->";
        for(auto it:adj[i])
        {
            if(vis[it]==0)
            {
               if(y>mp[it])
               {
                   y=mp[it];
                   an=it;
                   //cout<<i<<"->"<<y<<","<<an<<endl;
                   //dfs(adj,mp,vis,it,an,y);
               }
                
                dfs(adj,mp,vis,it);
               
            }
        }
    }
    
    vector<int> loudAndRich(vector<vector<int>>& rich, vector<int>& q) {
        //if(rich.size()==0)return q;
        unordered_map<int,int>mp;
        for(int i=0; i<q.size(); i++)
        {
            mp[i]=q[i];
        }
        
        vector<int>adj[q.size()];
        for(int i=0; i<rich.size(); i++)
        {
            adj[rich[i][1]].push_back(rich[i][0]);
        }
        vector<int>ans(q.size(),0);
        int n=q.size();
        for(int i=0; i<q.size(); i++)
        {
            vector<int>vis(n,0);
            if(adj[i].size()==0)
            {
                ans[i]=i;
            }
            else
            {
                an=i;
                y=mp[i];
                dfs(adj,mp,vis,i);
                ans[i]=an;
                //cout<<i<<"->"<<an<<endl;
            }
        }
        
        return ans;
    }
};