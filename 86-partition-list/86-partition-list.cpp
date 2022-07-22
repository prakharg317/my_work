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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL  || head->next==NULL)return head;
        ListNode *p1=head;
        ListNode *p2,*p3=NULL,*p4,*p5;
        p2=head;
        int flag=0;
        ListNode *node=new ListNode(101);
        while(p1!=NULL  && p1->val< x)
        {
            if(p1->next!=NULL && p1->next->val>=x)
            {
                p3=p1;
                p1=p1->next;
               
                break;
            }
            p1=p1->next;;
        }
         p4=p1;
        if(p2->val>=x)
        {
           p3=node;
            p5=p3;
            flag=1;
        }
        
        while(p1!=NULL && p1->next!=NULL)
        {
            if(p1->next!=NULL && p1->next->val>=x)p1=p1->next;
            else
            {
              p3->next=p1->next;
              p3=p3->next;
              p1->next=p3->next;
                p3->next=NULL;
            }
        }
        
        if(p3!=NULL)p3->next=p4;
       
        if(flag==1)
        {
             //cout<<"ds";
            return p5->next;
        }
        return head;
    }
};