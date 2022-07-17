class Solution {
public:
     int gcd(int a, int b)
    {
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
    
    int findGCD(vector<int>&arr, int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
    
    
    int minOperations(vector<int>& nums, vector<int>& nd) {
        
       
        map<int,int>mp;
        
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        
       
 
// Function to find gcd of array of
// numbers

        int n=nd.size();
        int hcf= findGCD(nd, n);
        
        
        
        int ans=-1;
        int sum=0;
        for(auto it:mp)
        {
            sum+=it.second;
        }
        //cout<<hcf<<" ";
        for(auto it:mp)
        {
           
            if(it.first==hcf  || hcf % it.first==0)
            {
                break;
            }
            else ans+= it.second;
            //cout<<it.first<<"->"<<it.second<<endl;
        }
        ans=ans+1;
        if(ans==sum)return -1;
        else return ans;
        
    }
};