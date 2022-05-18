// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
    bool is(vector<vector<int>>&dp, vector<int>&arr, int sum,int i)
    {
        ///cout<<sum<<" ";
        if(sum==0)return true;
        if(i==0) return (arr[0]==sum);
        
           if(dp[i][sum]!=-1)return dp[i][sum];
           
            bool nt=(is(dp,arr,sum,i-1));
            bool t=false;
            
            if(sum>=arr[i])
            {
               t= (is(dp,arr,sum-arr[i],i-1)); 
            }
            
            return dp[i][sum]= (t|nt);
            
        
        
        
    } 
    
    
    
    
    
    
    
    bool isSubsetSum(vector<int>arr, int sum)
    {
        vector<vector<int>>dp(arr.size()+1,vector<int>(sum+1,-1));
        int n=arr.size()-1;
          bool s=is(dp,arr,sum,n);
          //cout<<s;
          return s;
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends