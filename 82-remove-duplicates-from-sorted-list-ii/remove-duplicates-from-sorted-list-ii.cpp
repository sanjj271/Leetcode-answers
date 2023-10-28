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
    ListNode* deleteDuplicates(ListNode* head) {
    map<int,int>mp;
    ListNode* temp =head;
    while(temp!=NULL){
        mp[temp->val]++;
        temp = temp->next;
    }
    auto it = mp.begin();
    while (it != mp.end()) {
    if (it->second != 1) {
        it = mp.erase(it);
    } else {
        ++it;
    }
}
    for(auto j : mp){
        cout<<j.first<<" "<<j.second<<endl;
    }
    ListNode* newList = NULL;
    ListNode*temp2;
    for(auto i :mp){
        if(newList == NULL){
            temp2 = new ListNode(i.first);
            newList = temp2;
        }
        else{
            temp2->next = new ListNode(i.first);
            temp2=temp2->next;
        }

    }
    return newList;
    }
};