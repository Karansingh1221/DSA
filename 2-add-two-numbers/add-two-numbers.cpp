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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *dummy=new ListNode();
        ListNode *curr=dummy;
        while(l1 || l2 || carry){
            int sum=carry;
            if(l1) {sum+=l1->val; l1=l1->next;}
            if(l2){ sum+=l2->val; l2=l2->next;}
            curr->next=new ListNode(sum%10);
            carry=sum/10; 
            curr=curr->next;            
        }
        if(carry==1){
            curr->next=new ListNode(1);
            curr=curr->next;
        }
        return dummy->next;
    }
};