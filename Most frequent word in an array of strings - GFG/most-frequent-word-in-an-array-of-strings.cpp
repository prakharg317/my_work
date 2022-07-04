// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        unordered_map<string, pair<int,int>>mp;
        int maxi=1;
        for(int i=0; i<n;i++)
        {
            if(mp.find(arr[i])==mp.end())
            {
               //mp.insert({arr[i],{1,i}}); 
               mp[arr[i]]={1,i};
            }
            else
            {
                auto it= mp[arr[i]];
                mp[arr[i]]={it.first+1,it.second};
                //mp.insert({arr[i],{it.first+1,i}});
                maxi= max(maxi,it.first+1);
            }
            
        }
        string ans;
        int x=-1;
        
        for(auto it:mp )
        {
          if(it.second.first==maxi)
          {
              //ans="";
              //maxi=it.second.first;
              if(x<it.second.second)
              {
                  x=it.second.second;
                  ans=it.first; 
              }
               
               //cout<<it.first<<" ";
               //cout<<it.first<<" :"<<it.second.first<<" ";
           }
        }
       
       //cout<<maxi<<" ";
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends