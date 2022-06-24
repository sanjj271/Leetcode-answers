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
    vector<int> getLonelyNodes(TreeNode* root) {
    vector<int>res;
    helper(root,res);
    return res;
        
    }
    void helper(TreeNode* root, vector<int>&v1){
    if(root == NULL){
        return;
    }
    else if(root->left == NULL && root->right == NULL){
        return;
    }
    else if(root->left == NULL){
        v1.push_back(root->right->val);
        helper(root->right,v1);
    }
    else if(root->right == NULL){
        v1.push_back(root->left->val);
        helper(root->left,v1);
    }
    else{
        helper(root->left,v1);
        helper(root->right,v1);
    }
        
    }
};