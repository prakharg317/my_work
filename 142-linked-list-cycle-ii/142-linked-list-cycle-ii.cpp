/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)return NULL;
        ListNode * slow=head;
        ListNode * fast=head;
        ListNode * t=head;
        int flag=0;
        while(fast->next !=NULL  && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)return NULL;
        
        while(t!=slow)
        {
            slow=slow->next;
            t=t->next;
        }
        
        return t;
    }
};