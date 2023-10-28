/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    map<Node* , Node*> mp;
    Node* temp = head;
    Node* deepcopy = NULL;
    Node* temp2;
    while(temp!=NULL){
        if(deepcopy == NULL){
            temp2 = new Node(temp->val);
            deepcopy = temp2;
        }
        else{
            temp2->next = new Node(temp->val);
            temp2 = temp2->next;
        }
        temp = temp->next;

    }
    Node* t1 = head;
    Node* t2 = deepcopy;
    while(t1!=NULL && t2!=NULL){
        mp[t1]=t2;
        t1 = t1->next;
        t2 = t2->next;
    }
    Node*x = deepcopy;
    Node* y = head;
    while(x!=NULL){
        x->random = mp[y->random];
        x= x->next;
        y = y->next;
    }

    return deepcopy;

        
    }
};