/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *t;
    ListNode * reverse(ListNode *s, ListNode *e)
    {
        
        ListNode *d= NULL;
        ListNode *prev=s, *nex;
        int flag=0;
        
        while(prev!=e)
        {
            nex=prev->next;
            prev->next=d;
            d=prev;
            if(flag==0)
            {
                t=d;
                flag=1;
            }
            prev=nex;
            //n=prev->next;
        }
        
        prev->next=d;
        
        return prev;
        
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==NULL)return head;
        if(left==right)return head;
        int c=0;
        
        ListNode *p=head;
        while(p!=NULL)
        {
            c++;
            p=p->next;
        }
        ListNode *r;
        ListNode *l= new ListNode(-501);
        p=head;
        int x=1;
        while(x!=right)
        {
            if(x==left-1)
            {
                l=p;
            }
            
            x++;
            p=p->next;
        }
        ListNode *l1;
     r=p->next;
        l1=p;
        ListNode *node;
        if(left!=1) node= reverse(l->next, p);
        else node= reverse(head,p);
        
        if(left!=1)
        {
            l->next=node;
        }
        else
        {
            //cout<<"sa";
            l->next=node;
            t->next=r;
            
            return l->next;
        }
        t->next=r;
        
        return head;
    }
};