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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
    ListNode* curr = head;
    ListNode* prev = NULL;

    for (int i = 1; i<left; i++) {
        prev = curr;
        curr = curr->next;
    }
    ListNode*conn =prev;
    ListNode*tail = curr;
    
    ListNode*next;
    for(int i =0;i<right-left+ 1;i++){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if(conn){
        conn->next = prev;
    }
    else{
        head = prev;
    }
    tail->next = curr;
    return head;




        
    }
};