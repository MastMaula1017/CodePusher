// Problem: 24. Swap Nodes in Pairs
// Runtime: 0 ms (Beats 100.00%)
// Memory: 11.2 MB (Beats 20.17%)

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        while (prev->next && prev->next->next) {
            ListNode* first = prev->next;
            ListNode* second = first->next;

            // Swap the two nodes
            first->next = second->next;
            second->next = first;
            prev->next = second;

            // Move to the next pair
            prev = first;
        }

        return dummy.next;
    }
};