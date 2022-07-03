// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     if(s.size()<x.size())return -1;
     
     int i=0;
     int j=0;
     int ans;
     int flag=0;
     while(i<s.size())
     {
         if(j==x.size())return ans; 
         if(s[i]==x[j] )
         {
             j++;
             if(flag==0)
             {
                 ans=i;
                 flag=1;
             }
         }
         else
         {
             if(s[i]!=x[j] && j!=0)
             {
                 j=0;
                 flag=0;
                 i=ans;
             }
         }
         i++;
     }
     if(j==x.size())return ans;
     return -1;
}