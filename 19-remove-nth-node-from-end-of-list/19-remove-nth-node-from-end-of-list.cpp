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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp1 = head;
    ListNode* temp2 = head;
    int count =0;
        
    while(count!=n){
        temp1=temp1->next;
        count++;
        
    }
    if(temp1==NULL){
        head=temp2->next;
        return head;
    }
    while(temp1!=NULL && temp1 ->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp2 == head && temp2->next==NULL){
        head = temp2->next;
        return head;
    }
    temp2->next = temp2->next->next;
    return head;
    
        
        
        
    }
};