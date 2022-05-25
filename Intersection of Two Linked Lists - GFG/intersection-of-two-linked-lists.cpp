// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
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
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        unordered_map<int,int>mp;
        Node * t1=head1;
        Node *t2= head2;
        
        while(t1!=NULL)
        {
          mp[t1->data]++;
          
          t1=t1->next;
        }
            
        while(t2!=NULL)
        {
            mp[t2->data] ++;
            t2=t2->next;
        }
        
        Node * p= new Node(0);
        Node * a=p;
        
        for(auto it:mp)
        {
            if(it.second>=1)
            {
                //cout<<it.first;
            }
        }
        
        t1=head1;
        while(t1!=NULL)
        {
            if(mp[t1->data]>1)
            {
                Node * temp= new Node(t1->data);
                //cout<<it.first;
                a->next=temp;
                a=a->next;
            }
            t1=t1->next;
        }
        a->next=NULL;
        
        return p->next;
        
        
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    
	    cin>> n;
	    Node* head1 = inputList(n);
	    
	    cin>>m;
	    Node* head2 = inputList(m);
	    Solution obj;
	    Node* result = obj.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}
  // } Driver Code Ends