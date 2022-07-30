class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        
        unordered_map<char,int>cp;
        unordered_map<char,int>ex;
        for(char c='a';c<='z';c++)
        {
            ex[c]=0;
            
        }
        int count=0;
        for(int i=0; i<words2.size(); i++)
        {
            string s=words2[i];
            int l=s.size();
            int j=0;
            unordered_map<char,int>w2;
            while(j<l)
            {
                w2[s[j]]++;  
                j++;
            }
            
            for(auto it:w2)
            {
                if(it.second>ex[it.first])
                {
                    if(ex[it.first]==0)count++;
                    ex[it.first]=it.second;
                    
                }
            }
        }
        
//         for(auto it:ex)
//         {
//             cout<<it.first<<"->"<<it.second;
//             cout<<endl;
            
//         }
        
        
        
        cp=ex;
        cout<<count;
        vector<string>ans;
        for(int i=0; i<words1.size(); i++)
        {
            string s= words1[i];
            int j=0;
            while(j<s.size())
            {
                if(ex.find(s[j])!=ex.end())
                {
                    ex[s[j]]--;
                    if(ex[s[j]]==0)
                    {
                        ex.erase(s[j]);
                    }
                    
                }
                j++;
            }
            
            if(ex.size()==(26-count))
            {
                ans.push_back(words1[i]);
                
            }
            //ex.clear();
            ex=cp;
        }
        return ans;
    }
};