
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || head->next == NULL || k==0)
        {
            return head;
        }
        
        int count=1;
        ListNode*temp = head;
        
        while(temp->next)
        {
            count++;
            temp = temp->next;
        }
        
        temp->next = head;
        k = k%count;
        k = count-k;
        
        while(k--){
            temp = temp->next;
        }
        
        head = temp->next;
        temp->next = NULL;
        
        
        return head;
    }
};