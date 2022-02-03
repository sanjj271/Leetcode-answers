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
    int sum = 0;
    ListNode* prev ;
    ListNode* curr;
    ListNode* head = NULL;
    while(l1!= NULL && l2!=NULL){
        ListNode* finall = new ListNode();
        sum =0;
        sum=l1->val + l2->val + carry;
        l1 = l1->next;
        l2 = l2->next;
        if(sum >= 10){
            carry = 1;
        }
        else{
            carry = 0;
        }
        finall->val = sum % 10;
        if(head == NULL){
            head = finall;
            prev = head;
        }
        else{
            curr = finall;
            prev -> next = curr;
            prev = curr;       
        }   
    }
    while(l1!=NULL){
        ListNode* finall = new ListNode();
        sum = 0;
        sum=l1->val +  carry;
        l1 = l1->next;
        if(sum >= 10){
            carry = 1;
        }
        else{
            carry = 0;
        }
        finall->val = sum % 10;
        if(head == NULL){
            head = finall;
            prev = head;
        }
        else{
            curr = finall;
            prev -> next = curr;
            prev = curr;       
        }   
        
    }
    while(l2!=NULL){
        ListNode* finall = new ListNode();
        sum = 0;
        sum=l2->val +  carry;
        l2 = l2->next;
        if(sum >= 10){
            carry = 1;
        }
        else{
            carry = 0;
        }
        finall->val = sum % 10;
        if(head == NULL){
            head = finall;
            prev = head;
        }
        else{
            curr = finall;
            prev -> next = curr;
            prev = curr;       
        }   
        
    }
    if(carry == 1){
      ListNode* finall = new ListNode();
      curr = finall;
      finall -> val = 1;
      prev -> next = curr;
      prev = curr;   
    }
    return head;
    
    
        
    
        
        
    
        
        
        
        
    }
    
};