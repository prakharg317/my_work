// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

  void ss(vector<int>&arr, int &sum, vector<int>&ans, int N,int ind)
  {
      
         if(ind>N)
         {
             //ans.pop_back();
             return;
         }
          
      
      
      
      
      sum= sum+ arr[ind];
      //ans.push_back(sum);
      ss(arr,sum,ans,N,ind+1);
      
      
      sum=sum-arr[ind];
      //ans.pop_back();
      ss(arr,sum,ans,N,ind+1);
      if(ind==N)
      {
         ans.push_back(sum); 
      }
      
  }




    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int sum=0;
        ss(arr,sum,ans,N,0);
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends