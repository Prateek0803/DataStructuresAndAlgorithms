class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        
        ListNode *current = head;
        ListNode *next = head;
        ListNode *prev = NULL;
        
        while(current){
            next = current->next;
            current -> next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
};