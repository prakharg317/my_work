// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long lmax=INT_MIN;
        long long int rmax=INT_MIN;
        
        int l=0;
        int r=n-1;
        long long ans=0;
        while(l<r)
        {
            long long a= arr[l];
            long long b= arr[r];
            lmax=max(lmax,a);
            rmax=max(rmax,b);
            if(lmax>rmax)
            {
                ans+= abs(rmax-arr[r]);
                r--;
            }
            
            else
            {
                ans+= abs(lmax-arr[l]);
                l++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends