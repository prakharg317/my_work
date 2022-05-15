class Solution {
public:
    
    int up(int m,int n, vector<vector<int>>&dp, vector<vector<int>>& og )
    {
        if(m==0  && n==0  && og[m][n]!=1)return 1;
        if(m==0  && n==0  && og[m][n]==1)return 0;
        
        
        if(m<0 || n<0)return 0;
        if(og[m][n]==1)return 0;
        
        if(dp[m][n]!=-1)return dp[m][n];
        
        int left= up(m-1,n,dp,og);
        int right= up(m,n-1,dp,og);
        int res= left+right;
        
        return dp[m][n]=res;
        
        
    }
    
    
    
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
       int m=  og.size();
        int n= og[0].size();
        
        vector<vector<int>>dp(m,vector<int>(n,-1));
        
        int res= up(m-1,n-1,dp,og);
        return res;
    }
};