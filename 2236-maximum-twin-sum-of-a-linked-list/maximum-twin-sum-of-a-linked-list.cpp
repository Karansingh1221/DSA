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
    ListNode* reverse(ListNode* slow){
        if(slow==NULL || slow->next==NULL) return slow;
        ListNode *prev=NULL;
        ListNode *curr=slow;
        ListNode *next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=NULL;
        ListNode *slowhead=slow;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev=reverse(prev);
        int ans=0;
        while(prev!=NULL && prev->next!=NULL){
            ans=max(ans,slowhead->val+prev->val);
            prev=prev->next;
            slowhead=slowhead->next;
        }
        return ans;
    }
};