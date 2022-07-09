class Solution {
public:
    void merge(vector<int>& arr, int m, vector<int>& arr2, int n) {
        int x=m+n-1;
        int i=m-1;
        int j=n-1;
        // if(m==0)
        // {
        //     i=x;
        // }
        while(x>=0 && i>=0 && j>=0 )
        {
            if(arr[i]<=arr2[j])
            {
                arr[x]=arr2[j];
                x--;
                j--;
            }
            
            else
            {
                arr[x]=arr[i];
                i--;
                x--;
            }
        }
        if(i<0)
        {
            while(j>=0)
            {
                arr[x]=arr2[j];
                j--;
                x--;
            }
        }
        
        
        
    }
};