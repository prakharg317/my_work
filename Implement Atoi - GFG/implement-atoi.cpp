// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int a=0;
        int b=0;
        int flag=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[0]=='-'  && flag==0)
            {
                flag=1;
                continue;
            }
            if(str[i]=='0' || str[i]=='1'  || str[i]=='2' || str[i]=='3' || str[i]=='4' ||  str[i]=='5'  || str[i]=='6' || str[i]=='7' || str[i]=='8'  || str[i]=='9')
            {
               b= str[i]-'0';
               a=a*10+b;
            }
            else
            {
                return -1;
            }
                        
        }
        if(str[0]=='-')
        {
            a=a*(-1);
        }
        return a;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends