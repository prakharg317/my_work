class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0; i<arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        
        int half= arr.size()/2;
        
        for(auto it:mp)
        {
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int count=0;
        
        for(int i=v.size()-1; i>=0; i--)
        {
            half-= v[i];
            count++;
            if(half<=0)
            {
                break;
            }
        }
        
        return count;
        
    }
};