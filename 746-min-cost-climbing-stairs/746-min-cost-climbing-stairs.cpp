class Solution {
public:
    int dp[1001];
    
    
    
    int mcc(vector<int>& cost, int i)
    {
        if(i>cost.size())return INT_MAX;
        if(i==cost.size())return 0;
        if(dp[i]!=-1)return dp[i];
        
        
        return dp[i]=cost[i]+ min(mcc(cost,i+1), mcc(cost,i+2));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        for(int i=0; i<1001; i++)
    {
        dp[i]=-1;
    }
        return min(mcc(cost, 0), mcc(cost, 1));
        
        
        
        
    }
};