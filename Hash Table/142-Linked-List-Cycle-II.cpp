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
       ListNode* s= head;
       ListNode* f= head;
    
        while(f && f->next)
        {
            s=s->next;
            f=f->next->next;

            if(s==f)
            {
                break;
            }
        }
        s=head;
        ListNode* fp= f;

        if(f==NULL || fp->next==NULL) return NULL;

        while(s!=fp)
        {
            s=s->next;
            fp=fp->next;
        }
        return s;
    }   
};