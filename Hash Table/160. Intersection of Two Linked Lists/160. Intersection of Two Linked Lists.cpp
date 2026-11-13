// Problem: 160. Intersection of Two Linked Lists
// Runtime: 57 ms (Beats 55.42%)
// Memory: 23.9 MB (Beats 77.96%)

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* s = headA;
        ListNode* f = headB;

        while(s!=f)
        {
            // s=s->next;
            // f=f->next;

            // if(s->next == NULL)
            // {
            //     s=headB;
            // }

            // if(f->next == NULL)
            // {
            //     f=headA;
            // }

            if(s==NULL)
            {
                s=headB;
            }
            else
            {
                s=s->next;
            }
            if(f==NULL)
            {
                f=headA;
            }
            else
            {
                f=f->next;
            }


        }

        return s;
    }
};