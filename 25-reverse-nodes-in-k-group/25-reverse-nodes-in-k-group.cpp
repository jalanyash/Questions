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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==1)
            return head;
        int n=0; // to count the nodes
        ListNode* curr=head;
        while(curr){
           n++;
           curr=curr->next;
        }
        
        ListNode*prev= NULL, *newHead, *t1=NULL, *t2=head, *next;
        curr=head;
        
        while(n>=k){
            for(int i=0;i<k;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            }
            if(!newHead) newHead=prev;
            if(t1) t1->next=prev;
            t2->next=curr;
            t1=t2;
            t2=curr;
            prev=NULL;
            n-=k;
        }
        return newHead;
    }
};