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
        ListNode *prev = nullptr;
        ListNode *head = nullptr;
        ListNode *curr1 = list1;
        ListNode *curr2 = list2;
        ListNode *tmp;
        while(curr1 != nullptr || curr2 != nullptr) {
            if(curr1 == nullptr && curr2 != nullptr) {
                tmp = curr2;
                curr2 = curr2->next;
            } else if(curr1 != nullptr && curr2 == nullptr) {
                tmp = curr1;
                curr1 = curr1->next;
            } else {
                if(curr1->val >= curr2->val) {
                    tmp = curr2;
                    curr2 = curr2->next;
                } else {
                    tmp = curr1;
                    curr1 = curr1->next;
                }
            }
            
            if(prev == nullptr) {
                prev = tmp;
                head = prev;
            } else {
                prev->next = tmp;
                prev = prev->next;
            }
        }

        return head;
    }
};
