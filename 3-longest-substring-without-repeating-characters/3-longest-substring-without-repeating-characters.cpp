class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int i=0;
        int j=1;
        unordered_map<char,int>mp;
        int maxi=1;
        int res=1;
        mp[s[0]]++;
        while(j<s.size())
        {
          if(mp.find(s[j])==mp.end())
          {
              maxi++;
              mp[s[j]]++;
              j++;
          }
            else
            {
               res= max(res,maxi);
                mp.erase(s[i]);
                maxi=mp.size();
                
                i++;
                
            }
        }
        res= max(maxi,res);
        return res;
    }
};