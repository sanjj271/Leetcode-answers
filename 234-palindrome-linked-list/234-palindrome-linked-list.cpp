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
    bool isPalindrome(ListNode* head) {
    string ans ="";
    ListNode* temp = head;
    if(head == NULL){
        return true;
    }
    while(temp!=NULL){
        ans += to_string(temp->val);
        temp = temp->next;
    }
    string x = ans;
    reverse(x.begin(),x.end());
    return x == ans;
        
    }
};