// You don't have to delete the node just put the value of the next node into current node and change the pointer to the next->next;


class Solution {
public:
    void deleteNode(ListNode* node) {
        node -> val = node->next->val;
        node->next = node->next->next;
        
    }
};