class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        if(trust.size()==0  && n==1)return 1;
        if(trust.size()==0  && n!=1)return -1;
        
        for(int i=0; i<trust.size(); i++)
        {
            mp[trust[i][1]]++;
            mp1[trust[i][0]]++;
            
        }
        
        int x=-1;
        for(auto it:mp)
        {
            if(it.second==(n-1))
            {
                x=it.first;
                break;
            }
        }
        
        if(x==-1)return -1;
        if(mp1.find(x)==mp.end())
        {
            return x;
        }
        
        
            return -1;
        
    }
};