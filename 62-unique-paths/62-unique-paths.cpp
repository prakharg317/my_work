class Solution {
public:
    
    
  
    
    int uniquePaths(int m, int n) 
    {
        
        
       int dp[m][n];
        
       for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0  && j==0)dp[i][j]=1;
                
                  else
                {
                    int left=0;
                      int right=0;
                   
                   
                     if(i>0) left = dp[i-1][j];
                     if(j>0) right= dp[i][j-1];
                    
                     dp[i][j]=  left+right;
                   
                }
            }
        }
        
        
        
         return dp[m-1][n-1]; 
       
        
        
        //return res;
        
    }
};










//////////////////////////using recursion & memoization


// class Solution {
// public:
    
    
    
//     int up(int m,int n,vector<vector<int>>&dp)
//     {
//        if(m==0 && n==0)
//         {
//             return 1;
//         }
        
//         if(m<0 || n<0)return 0;
//         dp[0][0]=1;
        
//         if(dp[m][n]!=-1)return dp[m][n];
//             int left = up(m-1,n,dp) ;
//              int right = up(m,n-1,dp);
//             int res= left+right;
//             return dp[m][n]= res; 
        
        
        
          
//     }
    
    
//     int uniquePaths(int m, int n) 
//     {
        
        
//        vector<vector<int>> dp( m , vector<int> (n, -1)); 
//         int res= up(m-1,n-1,dp);
//         return res;
        
       
        
        
//         //return res;
        
//     }
// };