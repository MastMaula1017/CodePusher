// Problem: 21. Merge Two Sorted Lists
// Runtime: 0 ms (Beats 100.00%)
// Memory: 19.5 MB (Beats 26.59%)

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* res;

        if(list1->val < list2->val)
        {
            res = list1;
            res->next = mergeTwoLists(list1->next,list2);
        }
        else
        {
            res = list2;
            res->next = mergeTwoLists(list2->next,list1);
        }
        return res;
    }
};