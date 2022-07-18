class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j,int m , int n)
    {
       grid[i][j]='0';
        
        if(j-1>=0)
        {
            if(grid[i][j-1]=='1')
            {
                dfs(grid,i,j-1,m,n);
            }
            
            
        }
        
        if(j+1<n)
        {
            if(grid[i][j+1]=='1')
            {
                dfs(grid,i,j+1,m,n);
            }
        }
        
        if(i-1>=0)
        {
            if(grid[i-1][j]=='1')dfs(grid,i-1,j,m,n);
        }
        
        if(i+1<m)
        {
           if(grid[i+1][j]=='1')dfs(grid,i+1,j,m,n); 
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int count=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                   dfs(grid, i,j,m,n);
                    
                }
            }
        }
        
        return count;
        
    }
};