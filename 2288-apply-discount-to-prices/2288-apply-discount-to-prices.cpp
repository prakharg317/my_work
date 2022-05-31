class Solution {
public:
    string discountPrices(string sen, int dis) 
    {
        vector<string>v;
        
        int i=0;
        string s="";
        
        while(i<sen.size())
        {
            if(sen[i]!=' ')
            {
                s+=sen[i];
                i++;
                if(i>=sen.size())
                {
                    v.push_back(s);
                }
            }
            
            else
            {
                s+=sen[i];
                v.push_back(s);
                s="";
                i++;
            }
        }
        unordered_map<char,int>mp;
        for(char c='a';c<='z';c++)
        {
            mp[c]++;
        }
        mp['$']=1;
        //mp[' ']=1;
        //string a="";
        int flag=0;
        for(int i=0;i<v.size(); i++)
        {
            string t=v[i];
            flag=0;
            string a="";
            //cout<<t.size();
            if(t[1]==' ')continue;
           
            if(t[0]=='$' && t.size()!=1 && mp.find(t[1])==mp.end())
            {
                     int j=1;
                    // cout<<"kjk";
                
                    while(j<t.size())
                   {
                     if(mp.find(t[j])!=mp.end())
                      {
                         flag=1;
                         break;
                       }
                
                      else
                       {
                         a+=t[j];
                          j++;
                       }
                 }
                
                if(flag==0)
                {
                    long double x=stod(a);
                    //cout<<a<<" ";
                    x= x-((x*dis)/100);
                    //cout<<x<<"  ";
                    a=to_string(x);
                    
                    string h= "";
                    int l=0;
                    while(a[l]!='.')
                    {
                        h+=a[l];
                        l++;
                    }
                    h=h+a[l]+a[l+1]+a[l+2];
                    if(i<v.size()-1)
                       {
                         h='$'+h+' ';  
                       }
                       
                    else
                       {
                           h='$'+h;
                       }
                    
                    a="";
                    v[i]=h;
                    //cout<<h<<" ";
                    
                    
                }
                
           }
            
            
        }
        s="";
        for(int i=0;i<v.size(); i++)
        {
            //cout<<v[i];
            s+=v[i];
            
        }
        
        return s;
    }
};