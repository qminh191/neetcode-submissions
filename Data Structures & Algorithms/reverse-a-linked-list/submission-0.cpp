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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) return nullptr;
        ListNode* node_new = new ListNode(head->val);
        ListNode* node_tmp = head;
        while(node_tmp->next != nullptr) {
            node_tmp = node_tmp->next;
            node_new = new ListNode(node_tmp->val, node_new);
        }
        return node_new;
    }
};
