// Problem: 876. Middle of the Linked List
// Runtime: 0 ms (Beats 100.00%)
// Memory: 9.9 MB (Beats 88.49%)

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
    ListNode* middleNode(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;

        while(f!=nullptr && f->next != nullptr)
        {
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
};