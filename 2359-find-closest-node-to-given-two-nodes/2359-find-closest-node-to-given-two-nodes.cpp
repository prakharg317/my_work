class Solution {
public:
    void dfs1(int i, vector<int>&vis1, vector<int>&v1 ,vector<int>& edges)
    {
        vis1[i]=1;
        v1.push_back(i);
        cout<<i<<" ";
        
         if(edges[i]==-1)return;
            if(vis1[edges[i]]==0)
            {
               dfs1(edges[i],vis1,v1,edges); 
            }
    }
    
    void dfs2(int i, vector<int>&vis2, vector<int>&v2,vector<int>& edges )
    {
        if(i==-1)return;
        vis2[i]=1;
        v2.push_back(i);
        cout<<i<<" ";
        
        if(edges[i]==-1)return;
            if(vis2[edges[i]]==0)
            {
               dfs2(edges[i],vis2,v2,edges); 
            }
    }
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        if(edges[node1]==node2 && edges[node2]==node1)return min(node1,node2);
        if(node1==node2)return node1;
        if(edges[node1]==-1 && edges[node2]==-1)return -1;
        vector<int>vis1(edges.size(),0);
        vector<int>vis2(edges.size(),0);
        vector<int>v1,v2;
        dfs1(node1,vis1,v1,edges);
        dfs2(node2,vis2,v2,edges);
        int x= -1;
        int count=0;

       
        unordered_map<int,int>mp;
        for(int i=0; i<v1.size(); i++)
        {
            mp[v1[i]]=i;
        }
        
        int y=INT_MAX;
        int flag=0;
        int mini;
        for(int i=0; i<v2.size();i++)
        {
            
            if(mp.find(v2[i])!=mp.end())
            {
                mini= max(i,mp[v2[i]]);
                if(y>mini)
                {
                    x=v2[i];
                    y=mini;
                    flag++;
                }
                if(y==mini)
                {
                    if(x>v2[i])x=v2[i];
                }
               
            }
        }
        
        int ans=x;
        return ans;
    }
};