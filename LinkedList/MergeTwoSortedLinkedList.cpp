class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        ListNode* ansHead = ans;
        
        while(l1 || l2)
        {
            if(l1 == nullptr)
            {
                ans->next = l2;
                break;
            }
            else if(l2 == nullptr)
            {
                ans->next = l1;
                break;
            }
            else if(l1 -> val < l2->val)
            {
                ans->next = l1;
                l1 = l1->next;
            }
            else
            {
                ans->next = l2;
                l2 = l2->next;
            }
            
            ans = ans->next;
        }
        
        return ansHead->next;
    }
};