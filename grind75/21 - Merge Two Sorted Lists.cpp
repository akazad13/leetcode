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
        ListNode* node = new ListNode();
        ListNode* head = node;

        while(list1 != NULL && list2 != NULL) {
            if(list1->val <= list2->val) {
                node->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                node->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            node = node->next;
        }
        if(list1 != NULL) {
            node->next = list1;
        }
        if(list2 != NULL) {
            node->next = list2;
        }

        return head->next;
    }
};