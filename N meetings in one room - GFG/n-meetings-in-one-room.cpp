// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        multimap<int,int>mp;
        for(int i=0; i<n; i++)
        {
           mp.insert(pair<int,int>(end[i],start[i])); 
        }
        
        int count=0;
        
        int x;
        int flag=0;
        for(auto it:mp)
        {
            if(flag==0)
            {
               x= it.first;
               count++; 
               flag=1;
               continue;
            }
            
            if(x<it.second)
            {
                count++;
                x=it.first;
            }
        }
        
        
        return count;
          
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends