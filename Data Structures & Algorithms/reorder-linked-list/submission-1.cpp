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
        if(head == nullptr || head->next == nullptr) return;
        ListNode *pp = nullptr;
        ListNode *last = head;
        ListNode *fast = head;
        while(fast != nullptr && fast->next != nullptr) {
            pp = last;
            last = last->next;
            fast = fast->next->next;
        }
        pp->next = nullptr;

        ListNode *l1 = head;

        ListNode *prev = nullptr;
        ListNode *curr = last;
        while(curr != nullptr) {
            ListNode *tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }

        ListNode dummy(0);
        ListNode *q = &dummy;
        while(l1 != nullptr && prev != nullptr) {
            q->next = l1;
            l1 = l1->next;
            q->next->next = prev;
            q = q->next->next;
            prev = prev->next;
        }

        head = dummy.next;
    }
};
