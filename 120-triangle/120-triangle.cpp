class Solution {
public:
    int mt(vector<vector<int>>& dp,vector<vector<int>>& triangle,int i,int j)
    {
        if(i>= triangle.size() || j>=triangle[i].size()) return 0;
        
        
        
       
        if(dp[i][j]!=-1)return dp[i][j];
        
        long long int l= triangle[i][j]+mt(dp,triangle,i+1,j);
        long long int r= triangle[i][j]+mt(dp,triangle,i+1,j+1);
            
            long long int res= min(l,r);
          return dp[i][j]=res;
    }
    
    
    
    int minimumTotal(vector<vector<int>>& triangle)
    {
       
        vector<vector<int>>dp;
        dp=triangle;
        
        for(int i=0; i<triangle.size(); i++)
        {
            for(int j=0; j<triangle[i].size(); j++)
            {
                dp[i][j]=-1;
            }
        }
        int i=triangle[triangle.size()-1].size();
        cout<<i;
        int j=i;
        int res= mt(dp,triangle,0,0);
        
        return res;
        
    }
};