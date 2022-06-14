class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0;
        int h=arr.size();
        int mid;
        
        while(h-l>1)
        {
            mid=(l+h)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            
            else if(arr[mid]<arr[mid+1]  && arr[mid]>arr[mid-1])
            {
                l=mid+1;
            }
            else if(arr[mid]>arr[mid+1])
            {
                h=mid;
            }
        }
        if(arr[l]>arr[l-1]  && arr[l]>arr[l+1])return l;
        else return h;
    }
};