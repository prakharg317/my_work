class Solution {
public:
    
    bool isBipartite(vector<vector<int>>& graph) {
        
//         vector<int>adj[100];
//         for(int i=0; i<graph.size(); i++)
//         {
          
//             for(int j=0; j<graph[i].size(); j++)
//             {
//                 adj[i].push_back(graph[i][j]);
                
//             }
            
//         }
        
        int n=graph.size();
        
        vector<int>col(n,-1);
        queue<int>q;
        for(int i=0; i<n; i++ )
        {
            if(col[i]==-1)
            {
                q.push(i);
                col[i]=1;
                while(!q.empty())
                {
                  int x= q.front();
                    q.pop();
                    for(auto it:graph[x])
                    {
                        if(col[it]==-1)
                        {
                           q.push(it);
                           if(col[x]==1)
                           {
                            col[it]=0;
                           }
                           else col[it]=1; 
                        }
                        
                        else
                        {
                            if(col[it]==col[x])return false;
                        }
                        
                    }
                }
            }
        }
        
        
        
        return true;
       
        
        
    }
};