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
    int carry = 0;
    ListNode* head = NULL;
    ListNode* temp;
    int sum ;
    while(l1 != NULL && l2!= NULL){
         sum = l1->val + l2 -> val + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum%10;
        }
        else
        {
            carry  = 0;
        }
        if(head == NULL){
             temp = new ListNode(sum, NULL);
            head = temp;
        }
        else{
            temp -> next = new ListNode(sum, NULL);
            temp = temp->next;
        }
        l1 = l1->next;
        l2=l2->next;   
    }
    while(l1!= NULL){
        int sum = l1->val + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum%10;
        }
        else{
            carry =0;
        }
        if(head == NULL){
             temp = new ListNode(sum, NULL);
            head = temp;
        }
        else{
            temp -> next = new ListNode(sum, NULL);
            temp = temp->next;
        }
        l1 = l1->next;
        
    }
    while(l2!= NULL){
        int sum = l2->val + carry;
        if(sum >= 10){
            carry = 1;
            sum = sum%10;
        }
        else{
            carry =0;
        }
        if(head == NULL){
            temp = new ListNode(sum, NULL);
            head = temp;
        }
        else{
            temp -> next = new ListNode(sum, NULL);
            temp = temp->next;
        }
        l2 = l2->next;
        
    }
    if(carry == 1){
        temp -> next = new ListNode(1, NULL);
    }
    return head;
    
    
    
    
    
    
        
        
    }
};