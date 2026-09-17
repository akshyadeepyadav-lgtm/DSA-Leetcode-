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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        ListNode* del=nullptr;
        if(head==nullptr || head->next==nullptr) return nullptr;
        int n=0;
        while(temp!=nullptr){
            n++;
            temp=temp->next;
        }
        int m=0;
        temp=head;
        while(m+1!=(n/2)){
            temp=temp->next;
            m++;
        }
        del=temp->next;
        temp->next=del->next;
        delete del;
        return head;
    }
};