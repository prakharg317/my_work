// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string s="";
        int n= 0;
        int m=10000;
        if(N==1)return arr[0];
        for(int i=0; i<N; i++)
        {
            string q=arr[i];
            //if(q.size()==1)return q;
            //cout<<q.size();
            int x=q.size();
            if(m>x)
            {
                m=x;
            }
            
            if(q.size()>n)
            {
                n=q.size();
                s="";
                s=s+q;
                //cout<<"as ";
            }
            
            if(i<N-1)
            {
                if(arr[i][0]!=arr[i+1][0] )
                {
                    //cout<<"ds";
                    return "-1";
                }
            }
            
        }
        
        n= 10000;
        string ans;
        
        //cout<<s<<" ";
        
        for(int i=0; i<N; i++)
        {
            string w="";
           int j=0;
            
           int n1=0;
           string t=arr[i];
           //if(t.size()>m)continue;
           
               
               while(j<t.size())
             {
                if(s[j]==t[j])
                {
                    w+=t[j];
                    n1++;
                    j++;
                }
                else
                {
                    if(n1<n)
                    {
                        n=n1;
                        ans=w;
                        
                    }
                    
                   
                    break;
                }
             
             
             if(j==t.size())
             {
                 if(n1<n)
                 {
                     n=n1;
                     ans=w;
                 }
             }
             
           }
           
        }
        
        //cout<<ans.size()<<"  ";
        if(ans.size()==0)
        {
            return "-1";
        }
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends