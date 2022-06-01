class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=INT_MIN;
        int temp=0;
        
        for(int i=0; i<gain.size(); i++)
        {
            if(temp>ans)
            {
                ans=temp;
            }
            temp=temp+gain[i];
            if(temp>ans)
            {
                ans=temp;
            }
        }
        
        return ans;
    }
};