class Solution {
public:
    int lps(string &s, string &t, vector<vector<int>>&dp, int i,int j )
    {
        if(i<0 || j<0)return 0;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(s[i]==t[j])
        {
            return(1+lps(s,t,dp,i-1,j-1));
        }
        
        else
        {
            return  dp[i][j]= max(lps(s,t,dp,i-1,j), lps(s,t,dp, i,j-1));
        }
    }
    
    
    
    
    int longestPalindromeSubseq(string s) {
        
        string t= s;
        reverse(t.begin(),t.end());
        vector<vector<int>>dp(s.size()+1, vector<int>(t.size()+1,-1));
        return lps(s,t,dp,s.size()-1, s.size()-1);
        
    }
};