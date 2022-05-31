class Solution {
public:
    string t="";
    string getSmallestString(int n, int k) {
        
           
             int i=0;
            while(i<n)
            {
                t+='a';
                i++;
                //cout<<t;
            }
            if(n==k)return t;
        
        unordered_map<int,char>mp;
        char c='a';
        for(int i =1; i<=26; i++)
        {
            mp[i]=c;
            c++;
        }
        
        
        unordered_map<char,int>mp1;
        int j=1;
        for(char c='a'; c<='z'; c++)
        {
            mp1[c]=j;
            j++;
        }
        
        int res= k- (n-1);
        //cout<<res;
        for(int i=t.size()-1; i>=0; i--)
        {
           if(mp1[t[i]]<res)
           {
               //cout<<"12"<<" ";
               if((res-25)>26)
               {
                   t[i]=mp[26];
                   //cout<<t[i]<<" ";
                   res=res-25;
                   continue;
                   
               }
               
               else if((res-25)>0)
               {
                   //cout<<"13"<<" ";
                   
                   t[i]=mp[26];
                   res=res-25;
                   //cout<<t[i]<<" ";
                   continue;
               }
               
               else
               {   //cout<<"14"<<" ";
                   t[i]=mp[res];
                   break;
                   //cout<<t[i]<<" ";
               }
               
           }
            
        }
        
        
        return t;
        
        
        
    }
};