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
    int pairSum(ListNode* head) {
    ListNode* newList = NULL;
    ListNode* temp;
    ListNode* curr = head;
    while(curr!=NULL){
        if(newList == NULL){
            temp = new ListNode(curr->val);
            newList =temp;
        }
        else{
            temp -> next = new ListNode(curr->val);
            temp = temp->next;
        }
        curr=curr->next;
    }
    cout<<"here";
    ListNode* curr2 = head;
    ListNode* prev = NULL;
    ListNode* next;
    while(curr2!=NULL){
        next = curr2->next;
        curr2->next = prev;
        prev = curr2;
        curr2 = next;
    }
    cout<<prev->val<<endl;
    int count; 
    int sum;
    int maxsum = INT_MIN;
    while(prev!=NULL && newList!=NULL){
        sum = prev->val + newList->val;
        maxsum = max(maxsum, sum);
        prev = prev->next;
        newList = newList->next;
    
    }
    return maxsum;


        
    }
};