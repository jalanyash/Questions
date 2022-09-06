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
        int sz=0;
        int getLength(ListNode*head){
            while(head!=NULL){
                head=head->next;
                sz++;
            }
            return sz;
        }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=getLength(head);
        if(head==NULL|| head->next==NULL){
            return NULL;
        }
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*nxt=head->next;
        int cnt=1;
        while(cnt<len-n+1 && curr!=NULL){
            prev=curr;
            curr=curr->next;
            if(nxt!=NULL)
                nxt=nxt->next;
            cnt++;
        }
        if(prev==NULL){
            return curr->next;
        }
        prev->next=nxt;
        //curr->next=NULL;
        return head;
    }
};