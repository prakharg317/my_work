class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& iv) {
        if(iv.size()==1)return iv;
        sort(iv.begin(),iv.end());
        vector<vector<int>>ans;
        ans.push_back(iv[0]);
        for(int i=1; i<iv.size(); i++)
        {
            if(iv[i]!=iv[i-1])
            {
                ans.push_back(iv[i]);
            }
        }
        
        iv=ans;
        ans.clear();
        
        
        int flag=0;
        for(int i=0; i<iv.size(); i++)
        {
            vector<int>v;
            
            v.push_back(iv[i][0]);
            
            int x=iv[i][1];
            for(int j=i+1; j<iv.size(); j++)
                
            {
                if(j==iv.size()-1)
                {
                    flag=1;
                }
                if( (x>=iv[j][0] )  && (x>=iv[j][1]) )
                {
                  //x = iv[i][1]; 
                    //continue;
                }
                
                else if( (x>=iv[j][0])  && (x<iv[j][1]) )
                {
                    x=iv[j][1];
                    //continue;
                }
                
               
                   
                   else 
                   {
                       
                       i=j-1;
                       break;
                   }
                    
           }
            
            v.push_back(x);
            ans.push_back(v);
            if(flag==1)
            {
                break;
            }
        }
        
        int a= ans.size()-1;
        int val1= ans[a][1];
        int val2= iv[iv.size()-1][0];
        if(val1<val2)
        {
            vector<int>v;
            v.push_back(iv[iv.size()-1][0]);
             v.push_back(iv[iv.size()-1][1]);
            ans.push_back(v);
            
        }
        
        return ans;
    }
};