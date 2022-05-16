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
            
       
    }
    
    
    
    int minPathSum(vector<vector<int>>& grid) 
    {
        int m= grid.size();
        int n= grid[0].size();
        vector<int>ans;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        int res= mps(dp,grid,m-1,n-1);
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        
        return res;
        
    }
};