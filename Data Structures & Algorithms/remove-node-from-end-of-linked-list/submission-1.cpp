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
        int count = 0;
        ListNode *p = head;
        while(p != nullptr) {
            count++;
            p = p->next;
        }

        int pos = count - n;
        ListNode *curr = head;
        ListNode *prev = nullptr;

        for(int i = 0; i < pos; i++) {
            prev = curr;
            curr = curr->next;
        }
        if(prev == nullptr) {
            head = curr->next;
            delete curr;
        } else {
            prev->next = curr->next;
            curr->next = nullptr;
            delete curr;
        }

        return head;
    }
};
