class Solution {
public:
    int trap(vector<int>& ht) {
        vector<int>pre;
        vector<int>suf;
        suf=ht;
        int maxi=INT_MIN;
        for(int i=0;i<ht.size();i++)
        {
            pre.push_back(max(maxi,ht[i]));
            maxi=max(maxi,ht[i]);
        }
        maxi=INT_MIN;
        for(int i=ht.size()-1;i>=0;i--)
        {
            suf[i]= max (maxi,ht[i]);
            maxi=max(maxi,ht[i]);
        }
        
        int ans=0;
        for(int i=0;i<ht.size();i++)
        {
            int x=  min(suf[i],pre[i]) -  ht[i];
            if(x>0)
            {
                ans+=x;
            }
        }
        return ans;
    }
};