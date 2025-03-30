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
        // if(head==NULL || head->next==NULL){
        //     return head;
        // }
        // ListNode *rev =reverseList(head->next);
        // head->next->next=head;
        // head->next=NULL;
        // return rev;
        // ListNode *temp=head;
        // ListNode *head2=NULL;
        // while(temp!=NULL){
        //     ListNode *newnode=new ListNode(temp->val);
        //     newnode->next=head2;
        //     head2=newnode;
        //     temp=temp->next;
        // }
        // return head2;  
        // ListNode *prev=NULL;
        // ListNode *curr=head;
        // ListNode *next=NULL;
        // while(curr!=NULL){
        //     next=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=next;
        // }      
        // return prev;
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};