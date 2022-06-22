// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
   void dfs(int i, int j, vector<vector<char>>& grid)
    {
        
        grid[i][j]='0';
        if(j>0)
        {
           if(grid[i][j-1]=='1')
           {
             dfs(i,j-1,grid);  
           }
           
            
            
        }
        
        if((i+1)<grid.size())
        {
            if(grid[i+1][j]=='1')
            {
              dfs(i+1,j,grid);  
            }
            
        }
        
        if(i>0)
        {
            
          if(grid[i-1][j]=='1')dfs(i-1,j,grid);  
        }
        
        if((j+1)<grid[i].size())
        {
            
            if(grid[i][j+1]=='1')dfs(i,j+1,grid);
        }
        
        
        if(i>0 && j>0 )
    {
        if(grid[i-1][j-1]=='1')dfs(i-1,j-1,grid);
    }
    
    if(i>0 &&  j+1 <grid[i].size())
    {
        if(grid[i-1][j+1]=='1')dfs(i-1,j+1,grid);
    }
    
    if(i+1<grid.size() &&  j>0)
    {
        if(grid[i+1][j-1]=='1')dfs(i+1,j-1,grid);
    }
    
    if(i+1<grid.size() && j+1 <grid[i].size() )
    {
        if(grid[i+1][j+1]=='1')dfs(i+1,j+1,grid);
    }
    }
    
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int ans=0;
        
        for(int i=0; i<grid.size();i++)
        {
            for(int j=0; j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {   
                    ans++;
                    dfs(i,j,grid);
                    
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends