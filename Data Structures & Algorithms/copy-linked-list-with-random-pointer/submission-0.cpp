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
                Node *p = head;
        Node dummy(0);
        Node *res = &dummy;
        while(p != nullptr) {
            Node* node = new Node(p->val);
            res->next = node;
            res = node;
            p = p->next;
        }

        p = head;
        Node *tmp;
        Node *curr = dummy.next;
        int index;
        while(p != nullptr) {
            index = 0;
            tmp = p->random;
            if(tmp) {
                Node *test = head;
                while(test != tmp) {
                    test = test->next;
                    index++;
                }
                Node *pos = dummy.next;
                for(int i = 0; i < index; i++) {
                    pos = pos->next;
                }

                curr->random = pos;
                curr = curr->next;
            } else curr = curr->next;
            p = p->next;
        }
        return dummy.next;

    }
};
