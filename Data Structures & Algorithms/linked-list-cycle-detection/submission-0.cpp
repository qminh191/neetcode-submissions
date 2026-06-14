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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*, int> map;
        ListNode *p = head;
        while(p != nullptr) {
            map[p->next]++;
            if(map[p->next] > 1) return true;
            p = p->next;
        }
        return false;
    }
};
