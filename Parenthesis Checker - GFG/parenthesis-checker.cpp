// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        int i=0;
        int n=x.size();
        while(i<n)
        {
           if(x[i]=='{'   ||  x[i]=='('  ||  x[i]=='[')
           {
               s.push(x[i]);
           }
           
           else if(!s.empty() && (    (s.top()=='{' && x[i]=='}')  ||  (s.top()=='['  && x[i]==']')  || (s.top()=='('  &&  x[i]==')' )  ))
           {
               s.pop();
           }
           
           else 
           {
               return false;
           }
           
           
           i++;
        }
        
        if(s.size()==0)
        {
            return true;
        }
        
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends