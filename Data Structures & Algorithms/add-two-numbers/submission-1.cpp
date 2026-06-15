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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode *res = &dummy;

        int sum = 0, nho = 0, kq = 0;
        int val1, val2;
        while(l1 || l2) {
            if(l1) {
                val1 = l1->val;
                l1 = l1->next;
            } else val1 = 0;

            if(l2) {
                val2 = l2->val;
                l2 = l2->next;
            } else val2 = 0;

            sum = nho + val1 + val2;
            
            if(sum >= 10) {
                nho = 1;
                kq = sum - 10;
            } else {
                nho = 0;
                kq = sum;
            }

            ListNode *p = new ListNode(kq);

            res->next = p;
            res = res->next;
        }
        if(nho != 0) {
            ListNode *p = new ListNode(nho);
            res->next = p;
        }
        return dummy.next;
    }
};
