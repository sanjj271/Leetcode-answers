/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum =0;
    int sumRootToLeaf(TreeNode* root) {
        addsum(root,"");
        return sum;
        
        
    }
    void addsum(TreeNode* root, string s ){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
           s = s+ to_string(root->val);
           sum = sum + stoi(s,0,2) ;
           return;
        }
        s = s+ to_string(root->val);
        cout<<s<<endl;
        addsum(root->left,s);
        addsum(root->right,s);
    }
};