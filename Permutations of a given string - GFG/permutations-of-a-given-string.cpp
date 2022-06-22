// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	  void pos(vector<char>&ds, vector<string>&ans, string s,int fq[])
	  {
	     if(ds.size()==s.size())
	     {
	         string x="";
	         int i=0;
	         while(i<ds.size())
	         {
	             x+=ds[i];
	             i++;
	         }
	         ans.push_back(x);
	         return;
	     }
	     
	     for(int x=0; x<s.size();x++)
	     {
	        if(fq[x]==0)
	       {
	         ds.push_back(s[x]);
	         fq[x]=1;
	         pos(ds,ans,s,fq);
	         fq[x]=0;
	         ds.pop_back();
	         
	       } 
	     }
	     
	     
	  }
	 
	
		vector<string>find_permutation(string s)
		{
		    vector<string>ans;
		    //vector<int>fq(s.size(),0);
		   int fq[s.size()]={0};
		   for(int i=0;i<s.size();i++)
		   {
		       fq[i]=0;
		   }
		  
		    vector<char>ds;
		    pos(ds,ans,s,fq);
		    
		    map<string,int>mp;
		    for(int i=0;i<ans.size();i++)
		    {
		        mp.insert({ans[i],i});
		    }
		    ans.clear();
		    
		    for(auto it:mp)
		    {
		        ans.push_back(it.first);
		    }
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends