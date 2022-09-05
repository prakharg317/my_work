class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mp;
        
        
        vector<vector<string>>ans;
        
        
        for(int i=0; i<strs.size(); i++)
        {
            
            string t=strs[i];
            sort(t.begin(),t.end());
           mp[t].push_back(strs[i]);
            
            
        }
        
        for(auto it:mp)
        {
            // vector<string>v;
            // for(auto itr:adj[it])
            // {
            //     v.push_back(itr);
            // }
            ans.push_back(it.second);
        }
        
        return ans;
    }
};