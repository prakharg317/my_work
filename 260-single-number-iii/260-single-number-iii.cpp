class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2)return nums;
        long long int Xor=0;
        for(int i=0;i<nums.size();i++)
        {
            Xor= Xor^nums[i];
        }
        long long int sum=Xor;
       long long int count=0;
        while(sum)
        {
            if(sum&1)
            {
                break;
            }
            sum=sum>>1;
            count++;
            
        }
       long long int s1=0;
        long long int s2=0;
        vector<int>ans;
        cout<<count<<" ";
        for(int i=0;i<nums.size();i++)
        {
            long long int a=nums[i];
            if((a>>count)&1 )
            {
                s1=s1^nums[i];
            }
            else
            {
                s2=s2^nums[i];
            }
            
        }
        ans.push_back(s1);
        ans.push_back(s2);
        
        return ans;
    }
};