class Solution {
public:
    vector<int> successfulPairs(vector<int>& sp, vector<int>& po, long long su) {
        
        
        vector<int>ans(sp.size(),0);
        sort(po.begin(),po.end());
        
        for(long long int i=0;i<sp.size();i++)
        {
            
            long long  count=0;
            
           
            long long t=sp[i];
            
            long long int x;
            int lo=0;
            int hi=po.size()-1;
            int mid;
            //cout<<lo<<" "<<hi<<" ";
            while(hi-lo>1)
            {
                mid=(lo+hi)/2;
                x=t*po[mid];
                
                if(x<su)
                {
                    lo=mid+1;
                    
                }
                else 
                {
                    hi=mid;
                    
                }
                
                
                //cout<<lo<<" "<<hi<<" ";
            }
            
            x=t*po[lo];
            
            if(x>=su)
            {
                //cout<<lo<<" ";
                count=po.size()-lo;
                ans[i]=count;
                continue;
            }
            
            
            x=t*po[hi];
            
            if(x>=su)
            {
               // cout<<hi<<" ";
                count=po.size()-hi;
                ans[i]=count;
                continue;
            }
            else
            {
                ans[i]=0;
            }
            
            
            
            
                
                    
                    
                    
            
            
           
            
        }
        
        
     return ans;   
    }
};