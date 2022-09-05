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
    ListNode* floydCycle(ListNode* head){
        
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=NULL && slow!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }
            slow=slow->next;
            
            if(fast==slow){
                return slow;
            }
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        ListNode* fastPoint=floydCycle(head);
        if(!fastPoint)
            return NULL;
        ListNode* slow=head;
        while(slow!=fastPoint){
            slow=slow->next;
            fastPoint=fastPoint->next;
        }
        return fastPoint;
    }
};