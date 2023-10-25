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
    int length ;
    ListNode* temp = head;
    int Nodetoremove;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    Nodetoremove = (length - n)+1;
    if(Nodetoremove == 1 && length == 1){
        return NULL;
    }
    ListNode* temp2 = head;
    int count =0;
    while(temp2!=NULL){
        count++;
        if(Nodetoremove == 1){
            head = head->next;
            return head;
        }
        else if(count == Nodetoremove-1){
            temp2->next = temp2->next->next;

        }
        temp2= temp2->next;
        
    }
    return head;
    
        
    }
};