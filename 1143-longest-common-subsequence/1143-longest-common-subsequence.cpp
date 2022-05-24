class Solution {
public:
    int lcs(string &t1, string &t2, vector<vector<int>>&dp, int i,int j )
    {
        if(i<0 || j<0)return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
            
        if(t1[i]==t2[j])
        {
            return dp[i][j]= (1+ lcs(t1,t2,dp,i-1,j-1));
                
        }
        
        
        else{
            int x=   max(   lcs (t1,t2,dp,i-1,j)  ,  lcs(t1,t2,dp,i,j-1)    );
            return dp[i][j]=x;
        }
        
        
    }
    
    
    
    
    int longestCommonSubsequence(string t1, string t2) {
        int n=t1.size();
        int m=t2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        
        return lcs(t1,t2,dp,n-1,m-1);
        
    }
};