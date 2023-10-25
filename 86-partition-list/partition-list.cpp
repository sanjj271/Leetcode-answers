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
    bool flag = false;
    ListNode* smaller ;
    ListNode* temp= head;
    ListNode*head1 = NULL;
    ListNode * greater;
    ListNode*head2 = NULL;
    if(head == NULL){
        return head;
    }
    while(temp!=NULL){
        if(temp->val < x){
            flag = true;
            if(head1 == NULL){
                smaller = new ListNode(temp ->val);
                head1 = smaller;
            }
            else{
                smaller ->next = new ListNode(temp->val);
                smaller = smaller ->next;
            }
        }
        else if(temp->val>=x){
        flag = true;
           if(head2 == NULL){
                greater = new ListNode(temp ->val);
                head2 = greater;
            }
            else{
                greater->next = new ListNode(temp ->val);
                greater = greater->next;
            } 
        }
        temp = temp->next;
    }
    //cout<<smaller->val<<endl;
    if(head1 !=NULL && head2 !=NULL){
    smaller -> next = head2;
    }
    if(head1!=NULL){
        return head1;
    }
    if(head2!=NULL){
        return head2;
    }
    if(flag == true){
        return head1;
    }
    return head;

        
    }
};