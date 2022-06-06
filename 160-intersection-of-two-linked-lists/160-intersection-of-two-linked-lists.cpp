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
    unordered_set<ListNode*>ss;
    while(headA){
        ss.insert(headA);
        headA=headA->next;
    }
    while(headB && ss.find(headB)==ss.end()){
        headB=headB->next;
    }
    return headB;
    
        
    }
};