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
    ListNode* rotateRight(ListNode* head, int k) {
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }   
        if(n==0 || k==0) return head;    
        k=k%n;
        ListNode* temphead=head;
        ListNode* curr=head;
        for(int i=1;i<n-k;i++){
            curr=curr->next;
        }
        if(curr->next==NULL) return head;
        ListNode* mainhead=curr->next;
        ListNode* last=mainhead;
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=temphead;
        curr->next=NULL;
        return mainhead;
    }
};