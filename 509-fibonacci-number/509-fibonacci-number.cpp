class Solution {
public:
     int fib(int n) {
         if(n<=1)return n;
        
        
        
        int prev2=0;
        int prev1=1;
        int x;
        for(int i=2; i<=n;i++)
        {
            x=prev2+prev1;
            prev2=prev1;
            prev1=x;
        }
        return x;
    }
        
};