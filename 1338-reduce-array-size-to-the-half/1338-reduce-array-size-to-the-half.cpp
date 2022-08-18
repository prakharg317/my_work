class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
        
        for(int i=0; i<arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        
        int half= arr.size()/2;
        half=arr.size()-half;
        //cout<<half<<" ";
        multimap<int,int>mp1;
        
        for(auto it:mp)
        {
            //mp1[it.second]++;
            mp1.insert({it.second,0});
        }
        
        int count=0;
        
        for (auto it = mp1.rbegin(); it != mp1.rend(); it++) 
        {
           // cout<<it->first<<endl;
            half= half- (it->first);
            //cout<<half<<endl;
            count++;
            if(half<=0)
            {
                break;
            }
        }
        
        return count;
        
    }
};