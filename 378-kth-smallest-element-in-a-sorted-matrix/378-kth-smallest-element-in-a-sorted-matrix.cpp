class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m=matrix.size();
        priority_queue<int,vector<int>, greater<int>>pq;
        
        for(int i=0; i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                pq.push(matrix[i][j]);
                
            }
        }
        
        int i=0;
       while(i<k-1)
       {
           pq.pop();
           i++;
       }
        
        
        return pq.top();
    }
};