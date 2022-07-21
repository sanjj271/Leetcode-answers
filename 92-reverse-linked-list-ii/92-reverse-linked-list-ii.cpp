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
    ListNode* left_ptr;
    ListNode* right_ptr;
    ListNode *prev1;
    ListNode* temp=head;
    ListNode* prev=NULL;
    ListNode* next1=NULL;
    if(left == right){
        return head;
    }
    int count=1;
    while(temp!=NULL){
        if(count == left){
            prev1=prev;
            left_ptr = temp;
            
        }
        if(count == right){
            next1 = temp->next;
            right_ptr = temp;
            
        }
        count++;
        prev = temp;
        temp = temp->next;
    }
    ListNode* tempest;
    ListNode* r=helper(left_ptr,right_ptr);
    cout<<r->val<<"lol"<<endl;
    if(prev1!=NULL){
        prev1->next = r;
    }
    else{
        head = r;
    }
    tempest = r;
    while(tempest->next!=NULL){
        tempest=tempest->next;
    }
    //cout<<next1->val<<endl;
    //if(next1!=NULL){
    tempest->next = next1;
    //}
    return head;

    }
    ListNode* helper(ListNode* left_ptr, ListNode* right_ptr){
    right_ptr->next = NULL;
    if(left_ptr==right_ptr){
        return left_ptr; 
    }
    ListNode* t1=helper(left_ptr->next,right_ptr);
    //cout<<t1->next->val<<endl;
    ListNode* t2=t1;
    while(t1->next !=NULL){
       t1=t1->next;
    }
    t1->next = left_ptr;
    left_ptr->next = NULL;
    return t2;

    }
    
};