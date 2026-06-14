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
    void reorderList(ListNode* head) {
        ListNode *last = head;
        ListNode *fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            last = last->next;
            fast = fast->next->next;
        }

        ListNode *l1 = head;

        ListNode *prev = nullptr;
        ListNode *curr = last;
        while(curr != nullptr) {
            ListNode *tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }

        while(prev != nullptr) {
            ListNode *tmp1 = l1->next;
            ListNode *tmp2 = prev->next;
            l1->next = prev;
            prev->next = tmp1;
            l1 = tmp1;
            prev = tmp2;
        }
        if (l1) l1->next = nullptr;
    }
};
