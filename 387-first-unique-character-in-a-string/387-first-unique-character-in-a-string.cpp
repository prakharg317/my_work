class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            
        }
        
        int flag=0;
        int ans;
        
        for(int i=0; i<s.size(); i++)
        {
            if(mp[s[i]]==1)
            {
                ans=i;
                flag=1;
                break;
            }
        }
        
        if(flag==0)return -1;
        return ans;
    }
};