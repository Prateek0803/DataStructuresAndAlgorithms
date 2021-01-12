class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* newHead = head;
        while(newHead){
            count++;
            newHead = newHead->next;
        }
        
        count = count/2;
        newHead = head;
        for(int i=0;i<count;i++){
            newHead = newHead -> next;
        }
        return newHead;
    }
};