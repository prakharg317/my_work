// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int a[], int n, long long s)
    {
        // Your code here
        vector<int>v;
        if(a[0]==s)
        {
            v.push_back(1);
            v.push_back(1);
            return v;
        }
        int i=0;
        int j=0;
        long long int sum=0;
        while(i<n && j<n)
        {
          
          if(sum<s)
          {
              sum+=a[j];
              //j++;
          }
          
          if(sum>=s)
          {
              if(sum==s)
              {
                  v.push_back(i+1);
                  v.push_back(j+1);
                  //cout<<endl;
                  return v;
              }
              sum-=a[i];
              i++;
              if(sum<s)
              {
                  j++;
              }
              continue;
              
          }
          
          j++;
          //cout<<sum<<","<<j<<" ";
          
        }
        
        if(v.size()==0)
        {
            v.push_back(-1);
            return v;
        }
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends