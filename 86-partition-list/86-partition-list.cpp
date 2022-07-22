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
    ListNode* partition(ListNode* head, int x) {    
    ListNode* greater=NULL;
    ListNode* greatertail=NULL;
    ListNode* lesser=NULL;
    ListNode* lessertail=NULL;
    if(!head){
        return NULL;
    }
    while(head!=NULL){
        if(head->val >= x){
           if(greater == NULL){
           greater = head;
           greatertail = head;
            }
            else{
                greatertail ->next = head;
                greatertail = greatertail->next;
                
            }   
        }
        else{
            if(lesser == NULL){
            lesser = head;
            lessertail = head;
            }
            else{
                lessertail->next=head;
                lessertail = lessertail->next;
            }
        }
        head = head->next;
    }
    if(greatertail!=NULL){
    greatertail->next=NULL;
    }
    if(lesser!=NULL){
        lessertail->next= greater;
        return lesser;
    }
    return greater;
    
        
        
    }
};