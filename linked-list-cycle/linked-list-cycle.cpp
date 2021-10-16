/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
        ListNode* slowptr= head;
        ListNode* fastptr= head;
        while(fastptr!=NULL && fastptr->next!=NULL ){
            fastptr=fastptr->next->next;
            if(fastptr == slowptr){
                return true;
            }
            
            slowptr=slowptr->next;
            
            
        }
        return false;
        
    
        
    
    
        
        
        
        
    }
};