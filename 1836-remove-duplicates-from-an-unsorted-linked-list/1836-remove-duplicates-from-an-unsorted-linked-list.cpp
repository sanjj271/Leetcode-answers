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
    ListNode* deleteDuplicatesUnsorted(ListNode* head) {
    map<int, int>mp;
    unordered_set<int>s1;
    ListNode* temp = head;
    while(temp!=NULL){
        mp[temp->val]++;
        temp=temp->next;
    }
    temp = head;
    for(auto j : mp){
     if(j.second == 1){
        s1.insert(j.first);
    }
    }
    ListNode*l1=NULL;
    ListNode*t1;
    while(temp!=NULL){
        if(s1.find(temp->val)!=s1.end()){
        if(l1 == NULL){
            t1 = new ListNode(temp->val,NULL);
            l1 = t1;
        }
        else{
            t1->next = new ListNode(temp->val,NULL);
            t1=t1->next;
 
        }
        }
        temp=temp->next;
    }
    return l1;
    
    
        
    
    
    
    }  
    
};