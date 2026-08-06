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
        ListNode* t=head;
        set<int> st;

        while(t)
        {
            st.insert(t->val);
            t=t->next;
        }
        ListNode* d = new ListNode(-1);
        ListNode* tail=d;

        for(auto i=st.begin();i != st.end();i++)
        {
            tail->next=new ListNode(*i);
            tail=tail->next;
        }
        return d->next;
    }
};