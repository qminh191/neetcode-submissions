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
        ListNode *tmp;
        while(list1 != nullptr || list2 != nullptr) {
            if(list1 == nullptr && list2 != nullptr) {
                tmp = list2;
                list2 = list2->next;
            } else if(list1 != nullptr && list2 == nullptr) {
                tmp = list1;
                list1 = list1->next;
            } else {
                if(list1->val >= list2->val) {
                    tmp = list2;
                    list2 = list2->next;
                } else {
                    tmp = list1;
                    list1 = list1->next;
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
