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
    ListNode* sortList(ListNode* head) {
        
        ListNode* t=head;
        vector<int> ans;

        while(t)
        {
            ans.push_back(t->val);
            t=t->next;
        }

        sort(ans.begin(),ans.end());

        ListNode* d= new ListNode(-1);
        ListNode* tail=d;

        for(int i:ans)
        {
            tail->next=new ListNode(i);
            tail=tail->next;
        }
        return d->next;
    }
};