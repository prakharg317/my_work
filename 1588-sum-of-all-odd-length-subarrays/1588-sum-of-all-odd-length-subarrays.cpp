class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     int sum=0;
      for(int i=1; i<arr.size(); i++)
      {
          arr[i]=arr[i]+arr[i-1];
      }
        sum=sum+arr[arr.size()-1];
        
        
      for(int i=0; i<arr.size(); i++)
      {
          int j=i;
          while(j<arr.size())
          {
              if(i==0)
              {
                 j=j+2;
                  if(j<arr.size())
                  {
                    sum=sum+arr[j]; 
                      continue;
                  }
                  else
                  {
                      break;
                  }
                                   
              }
              
              else
              {
                  j=j+2;
                  
                  if(j<arr.size())
                  {
                    sum=sum+arr[j]-arr[i-1]; 
                      continue;
                  }
                  else
                  {
                      break;
                  }
              }
              
              
          }
      }
        return sum;
    }
};