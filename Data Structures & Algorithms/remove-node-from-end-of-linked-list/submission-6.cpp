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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr) return head;
        ListNode dummy(0, head);
        auto first = &dummy;        
        auto second = &dummy;

        for(int i = 0; i <= n; i++) first = first->next;
        
        while(first != nullptr) {
            second = second->next;
            first = first->next;
        }

        ListNode *p = second->next;
        second->next = second->next->next;
        p->next = nullptr;
        delete p;
        return dummy.next;
    }
};
