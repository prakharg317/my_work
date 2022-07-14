class Solution {
public:
    int up(vector<vector<int>>&dp, int i, int j)
    {
        if(i==0 && j==0)return 1;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        int u=0,left=0;
        if(j>0)
        {
            left=up(dp,i,j-1);
        }
        if(i>0) u= up(dp,i-1,j);
        
        return dp[i][j]= u+left;
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        return up(dp,m-1,n-1);
        
    }
};