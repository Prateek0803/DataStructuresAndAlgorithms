// Brute Force
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        
        ListNode *temp = head;
        
        while(temp!= NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
        
        int start = 0,end = v.size()-1;
        
        while(start<end)
        {
            if(v[start] != v[end])
            {
                return false;
            }
            
            start++;
            end--;
        }
        
        return true;
    }
};

//Optimized Approach
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head== NULL)
        {
            return true;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* curr = slow;
        ListNode* prev = nullptr;
        ListNode* next;
        
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        slow = head;
        fast = prev;
        
        while(slow && fast){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};