class Solution {
public:
    //int a;
    int   mps(vector<vector<int>>&dp, vector<vector<int>>& grid, int m,int n)
    {
        if(m==0  && n==0)
        {
            return grid[0][0];
        }
        
        if(m<0 || n<0)return  1000000  ;
        
        if(dp[m][n]!=-1)return dp[m][n];
       
            long long int up= grid[m][n]+ mps(dp,grid,m-1,n);
            long long int right= grid[m][n]+ mps(dp,grid,m,n-1);
        
            
            return dp[m][n]= min(up,right);
        
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0  && j==0)dp[i][j]=grid[i][j];
                
                else
                {
                    int up=0,left=0;
                    if(i>0) up= dp[i][j]+dp[i-1][j];
                    if(j>0)left= dp[i][j]+dp[i][j-1];
                    dp[i][j]=min(up,left);
                }
            }
        }
        return dp[m-1][n-1];
            
       
    }
    
    
    
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m= grid.size();
        int n= grid[0].size();
        //vector<vector<int>>dp(m,vector<int>(n,-1));
        int dp[m][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0  && j==0)dp[i][j]=grid[i][j];
                
                else
                {
                    int up=grid[i][j],left=grid[i][j];
                  if(i>0) up= up+dp[i-1][j];
                  else{up=up+1000000;}  
                    
                   if(j>0)left= left+dp[i][j-1];
                    else{left=left+1000000;}
                    
                    dp[i][j]=min(up,left);
                }
            }
        }
        return dp[m-1][n-1];
        
        
    }
};