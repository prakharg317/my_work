class Solution {
public:
    
    
    
    int up(int m,int n,vector<vector<int>>&dp)
    {
       if(m==0 && n==0)
        {
            return 1;
        }
        
        if(m<0 || n<0)return 0;
        
        if(dp[m][n]!=-1)return dp[m][n];
            int left = up(m-1,n,dp) ;
             int right = up(m,n-1,dp);
            int res= left+right;
            return dp[m][n]= res; 
          
    }
    
    
    int uniquePaths(int m, int n) 
    {
        
        
       vector<vector<int>> dp( m , vector<int> (n, -1)); 
        int res= up(m-1,n-1,dp);
        return res;
        
       
        
        
        //return res;
        
    }
};