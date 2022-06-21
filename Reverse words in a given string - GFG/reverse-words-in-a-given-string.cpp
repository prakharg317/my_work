// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        reverse(s.begin(),s.end());
        int i=0;
        int j=0;
        while(j<s.size())
        {
          if(s[j]!='.')
          {
              j++;
          }
          
          else
          {
             reverse(s.begin()+i,s.begin()+j);
             j++;
             i=j;
          }
        }
        reverse(s.begin()+i,s.begin()+j);
        return s;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends