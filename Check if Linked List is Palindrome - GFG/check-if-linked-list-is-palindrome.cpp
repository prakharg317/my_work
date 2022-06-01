// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    
    bool isPalindrome(Node *head)
    {
        Node *t=head;
        int count=0;
        while(t!=NULL)
        {
            count++;
            t=t->next;
        }
        if(count==1)return true;
        if(count==2)
        {
            if(head->data==head->next->data)return true;
            else return false;
        }
        
        
        if(count==3)
        {
            if(head->data==head->next->next->data)return true;
            else return false; 
        }
        
        
        if(count%2==0)count=count/2;
        else count= (count+1)/2;
        
        int i=1;
        t=head;
        while(i<count)
        {
            i++;
            t=t->next;
            
        }
        
         Node * prev=t;
         //cout<<prev->data;
        
        
        t=t->next;
        //cout<<t->data;
        Node *d=NULL;
        //Node *nex=t->next;
        
        while(t!=NULL)
        {   Node * nex=t->next;
            t->next=d;
            d=t;
            t=nex;
            //nex=nex->next;
            
        }
        
        
        
       
        
        prev->next=d;
        
        
        Node * slow=head;
        
        
        
        
        Node * fast= d;
        
        while(fast!=NULL)
        {
            if(slow->data==fast->data)
            {
                fast=fast->next;
                slow=slow->next;
            }
            
            else
            {
                return false;
            }
        }
        
        return true;
        
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends