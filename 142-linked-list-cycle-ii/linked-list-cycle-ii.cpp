/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        int pos=0;
        ListNode* slow=nullptr;
        ListNode* fast=nullptr;
        slow=head;
        fast=head;
        do{
            if(fast==nullptr || fast->next==nullptr) return nullptr;
            slow=slow->next;
            fast=fast->next->next;
        }
        while(slow!=fast);
        slow=head;
        while(slow!=fast){
            pos++;
            slow=slow->next;
            fast=fast->next;
        }
        return slow;        
    }
};