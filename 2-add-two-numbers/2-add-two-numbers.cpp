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
    int sum =0;
    int carry = 0;
    ListNode* head = NULL;
    ListNode* prev;
    ListNode* curr;
    while(l1!= NULL & l2!=NULL){
        sum =0;
        ListNode* nptr = new ListNode;
        sum = l1->val + l2->val + carry;
        l1 = l1->next;
        l2= l2->next;
        if(sum >= 10 ){
            carry = 1;
        }
        else{
            carry = 0;
        }
        nptr->val = sum%10;
        if(head == NULL){
            head = nptr;
            prev = head;
    
        }
        else{
            curr= nptr;
            prev -> next = curr;
            prev = curr;   
        }

    }
    while(l1!= NULL){
        sum =0;
        ListNode* nptr = new ListNode;
        sum = l1->val  + carry;
        l1 = l1->next;
        if(sum >= 10 ){
            carry = 1;
        }
        else{
            carry = 0;
        }
        nptr->val = sum%10;
        if(head == NULL){
            head = nptr;
            prev = head;
    
        }
        else{
            curr= nptr;
            prev -> next = curr;
            prev = curr;   
        }

    }
    while(l2!=NULL){
        sum =0;
        ListNode* nptr = new ListNode;
        sum =  l2->val + carry;
        l2= l2->next;
        if(sum >= 10 ){
            carry = 1;
        }
        else{
            carry = 0;
        }
        nptr->val = sum%10;
        if(head == NULL){
            head = nptr;
            prev = head;
    
        }
        else{
            curr= nptr;
            prev -> next = curr;
            prev = curr;   
        }

    }
    if(carry == 1 ){
        ListNode* nptr = new ListNode;
        curr= nptr;
        nptr->val = 1;
        prev -> next = curr;
        prev = curr;
        
    }
    return head;
    
        
        
        
    }
};