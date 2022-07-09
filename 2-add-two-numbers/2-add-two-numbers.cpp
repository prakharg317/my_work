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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *t1=l1;
        ListNode * t2=l2;
        ListNode* temp= new ListNode(carry);
        ListNode * p=temp;
        int flag=0;
        while(t1!=NULL  || t2!=NULL)
        {
            if(flag!=0)
            {
                ListNode* k= new ListNode(-1);
                p->next=k;
                p=p->next;
            }
           
            
            
            
            
            
            
            int x,y;
            
            if(t1==NULL && t2!=NULL)
            {
                x=0;
                y=t2->val;
                t2=t2->next;
            }
            else if(t2==NULL && t1!=NULL)
            {
                y=0;
                x=t1->val;
                t1=t1->next;
            }
            
            if(t1!=NULL  && t2!=NULL)
            {
                x=t1->val;
                y=t2->val;
                t1=t1->next;
                t2=t2->next;
            }
            int res= (x+y)+carry;
            carry=res/10;
            p->val= res%10;
            flag=1;
             
        }
        
        if(carry==0)return temp;
        
        ListNode* n1= new ListNode(carry);
        p->next=n1;
        return temp;
        
    }
};