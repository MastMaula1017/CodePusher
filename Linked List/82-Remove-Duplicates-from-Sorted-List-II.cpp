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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> mp;

        ListNode* t=head;

        while(t)
        {
            mp[t->val]++;
            t=t->next;
        }

        ListNode* d= new ListNode(-1);
        ListNode* tail=d;
        t=head;

        while(t)
        {
            if(mp[t->val]==1)
            {
                tail->next=new ListNode(t->val);
                tail=tail->next;
            }
            t=t->next;
        }

        return d->next;

    }
};