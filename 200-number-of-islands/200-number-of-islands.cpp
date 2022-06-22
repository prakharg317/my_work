class Solution {
public:
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
    }
    
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        int ans=0;
        
        for(int i=0; i<grid.size();i++)
        {
            for(int j=0; j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')
                {   //cout<<"dds";
                    ans++;
                    dfs(i,j,grid);
                    
                }
            }
        }
        return ans;
    }
};