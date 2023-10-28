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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    set<ListNode*>s1;
    ListNode*temp = headA;
    while(temp!=NULL){
        s1.insert(temp);
        temp=temp->next;
    }
    ListNode*temp1 = headB;
    while(temp1!=NULL){
        if(s1.find(temp1)!=s1.end()){
            return temp1;
        }
        temp1=temp1->next;
    }
    return NULL;

    
        
    }
};