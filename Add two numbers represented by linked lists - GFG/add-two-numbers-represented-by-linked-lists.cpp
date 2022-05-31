// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        vector<long long int>x;
        vector<long long int>y;
        
        Node * t1=first;
        
        while(t1!=NULL)
        {
            x.push_back(t1->data);
            t1=t1->next;
        }
        
        t1=second;
        while(t1!=NULL)
        {
            y.push_back(t1->data);
            t1=t1->next;
        }
        //   for(int i=0; i<y.size(); i++)
        // {
        //     cout<<y[i]<<" ";
            
            
        // }
        
        vector<int>v;
        int i=x.size()-1;
        int j=y.size()-1;
        int rem=0;
        int add;
        while(i>=0  && j>=0)
        {
            add= x[i]+y[j]+rem;
            i--;j--;
            v.push_back(add%10);
            rem=add/10;
            
        }
        
        
        if(i<0 )
        {
            while(j>=0)
            {
                add=y[j]+rem;
                j--;
                v.push_back(add%10);
                 rem=add/10;
            }
        }
        
        if(j<0)
        {
            while(i>=0)
            {
                add=x[i]+rem;
                i--;
                v.push_back(add%10);
                 rem=add/10;
            }
        }
        
        if(i==j  && rem!=0)
        {
            v.push_back(rem);
        }
        
        
        reverse(v.begin(),v.end());
        // for(int i=0; i<v.size(); i++)
        // {
        //     cout<<v[i]<<" ";
            
            
        // }
        
        
        Node * temp= new Node(-1);
        Node * t2=temp;
        for(int i=0;i<v.size();i++)
        {
          Node * t3= new Node(v[i]);
          t2->next=t3;
          t2=t2->next;
        }
        
        return temp->next;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends