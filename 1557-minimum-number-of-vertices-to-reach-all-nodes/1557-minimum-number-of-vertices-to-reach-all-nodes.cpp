class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0; i<edges.size(); i++)
        {
            mp[edges[i][1]]=edges[i][0];
        }
        
        for(int i=0; i<n; i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};