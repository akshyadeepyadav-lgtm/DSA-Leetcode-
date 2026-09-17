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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode* past=nullptr;
        ListNode* present=head;
        ListNode* future=present->next;
        while(present->next!=nullptr){
            present->next=past;
            past=present;
            present=future;
            future=present->next;
        }
        present->next=past;
        return present;
    }
};