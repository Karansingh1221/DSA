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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* last=head;
        ListNode* curr=head->next;
        while(curr!=NULL){
            if(curr->val>=last->val){
                last=last->next;
            }else{
                ListNode* prev=dummy;
                while(prev->next->val<curr->val){
                    prev=prev->next;
                }
                last->next=curr->next;
                curr->next=prev->next;
                prev->next=curr;
            }
            curr=last->next;
        }        
        return dummy->next;
    }
};