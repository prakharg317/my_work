class Solution {
public:
    int maximumBags(vector<int>& cap, vector<int>& rocks, int ar) {
        
        vector<long long int>v;
        
        for (int i = 0; i < cap.size(); ++i)
	     {
		     v.push_back(cap[i]-rocks[i]);
            }
        
        
        
        
        
        sort(v.begin(),v.end());
        
        int count=0;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        
        for(int i=0; i<v.size(); i++)
        {
            if (ar < v[i]) break;
              ar=ar-v[i];
              count++;
            
            
            
            
            
        }
        
        return count;
        
        
    }
};