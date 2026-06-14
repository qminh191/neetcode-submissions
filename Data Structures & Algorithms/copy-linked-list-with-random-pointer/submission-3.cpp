/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> map;
        Node *p = head;
        Node dummy(0);
        Node *res = &dummy;
        while(p != nullptr) {
            Node* node = new Node(p->val);
            res->next = node;
            map[p] = res->next;
            res = node;
            p = p->next;
        }

        p = head;
        res = dummy.next;
        while(p != nullptr) {
            if(p->random) {
                res->random = map[p->random];
            }
            res = res->next;
            p = p->next;
        }
        return dummy.next;
    }
};
