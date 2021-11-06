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
    int sumOfLeftLeaves(TreeNode* root) {
        return getsum(root->left, 0) + getsum(root->right,1);
    
        
        
        
    }
    int getsum(TreeNode* root, int d){
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root ->right == NULL){
        if(d==0){
            return root->val;
        }
        else{
            return 0;
        }
    }
    return getsum(root->left,0) + getsum(root->right,1);
    
        
    
    }
};