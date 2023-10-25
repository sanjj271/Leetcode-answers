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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head1 = l1;
    ListNode* head2 = l2;
    ListNode* head = NULL;
    ListNode* temp;
    bool carry = false;
    int sum;
    int finalsum; 
    while(head1 != NULL && head2!= NULL){
        if(carry== false){
          sum = head1->val + head2->val;
        }
        else if(carry){
            sum = head1->val + head2->val + 1;
        }
        if(sum >= 10){
            cout<<sum<<"SUM"<<endl;
            finalsum = sum%10;
            cout<<finalsum<<endl;;
            carry = true;
        }
        else if( sum <10){
            finalsum = sum;
            carry = false;
        }
        if(head == NULL){
            temp = new ListNode(finalsum);
            head = temp;
        }
        else{
            temp->next = new ListNode(finalsum);
            temp = temp->next;
        }
        head1= head1->next;
        head2= head2->next;
        }



        // ------------------------------------------
     while(head1 != NULL){
         if(carry== false){
          sum = head1->val;
        }
        else if(carry){
            sum = head1->val + 1;
        }
        if(sum >= 10){
            finalsum = sum%10;
            carry = true;
        }
        else if( sum <10){
            finalsum = sum;
            carry = false;
        }
        if(head == NULL){
            temp = new ListNode(finalsum);
            head = temp;
        }
        else{
            temp->next = new ListNode(finalsum);
            temp = temp->next;
        }
        head1= head1->next;

     }

     //________--_____________________________________

     while(head2 != NULL){
         if(carry== false){
          sum = head2->val;
        }
        else if(carry){
            sum = head2->val + 1;
        }
        if(sum >= 10){
            finalsum = sum%10;
            carry = true;
        }
        else if( sum <10){
            finalsum = sum;
            carry = false;
        }
        if(head == NULL){
            temp = new ListNode(finalsum);
            head = temp;
        }
        else{
            temp->next = new ListNode(finalsum);
            temp = temp->next;
        }
        head2= head2->next;

     }

     if(carry){
         temp->next = new ListNode(1);
     }
     return head;
       

       
        
    }

};