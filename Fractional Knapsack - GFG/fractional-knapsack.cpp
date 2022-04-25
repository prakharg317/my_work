// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        double x=0.0;
        //double vpw[n];
        vector<double>vpw(n,0.00);
        
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0; i<n; i++)
        {
            vpw[i]= (double)arr[i].value/(double)arr[i].weight;
            pq.push({vpw[i],{(double)arr[i].value, (double)arr[i].weight}});
        }
        double we=W;
        while(we>=0 &&!pq.empty())
        {
            
            if((we-(double)pq.top().second.second)>=0)
            {
                we= (we-(double)pq.top().second.second);
                x= x+ (double)pq.top().second.first;
            }
            
            else
            {
                we= we/(double)pq.top().second.second;
                x= x+ we*(double)pq.top().second.first;
                break;
            }
            
            pq.pop();
        }
        
        
        return x;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends