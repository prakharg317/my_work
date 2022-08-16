class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        //unordered_map<char,int>mp1;
        
        for(int i=0; i<s.size(); i++)
        {
            mp[s[i]]++;
            
        }
        
        int flag=0;
        
        for(auto it:mp)
        {
            if(it.second==1)
            {
                flag=1;
                
            }
            
            
        }
        if(flag==0)return -1;
        
        int ans;
        
        for(int i=0; i<s.size(); i++)
        {
            if(mp[s[i]]==1)
            {
                ans=i;
                break;
            }
        }
        
        
        
        return ans;
    }
};