class Solution {
public:
    int f(int i, int j, vector<int>& values, vector<vector<int>>&dp )
    {
        if(i==j)return 0;
        int mini=INT_MAX;
        
        if(dp[i][j]!=-1)return dp[i][j];
        for(int k=i; k<=j-1; k++)
        {
            int steps= values[i-1]*values[k]*values[j]+ f(i,k,values,dp)+f(k+1,j,values,dp);
            mini= min(mini,steps);
        }
        
        return dp[i][j]=mini;
    }
    
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
        return f(1,values.size()-1,values,dp);
        
    }
};