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
    bool isValidBST(TreeNode* root) {
    if(!root){
        return true;
    }
    else if(!root->left && !root->right){
        return true;
    }
    else if(root->left == NULL && root->val < root->right->val && lowestval(root->right) > root->val ){
        
        return isValidBST(root->right);
    }
    else if(root->right == NULL && root->val > root->left->val && highestval(root->left) < root->val ){
       
        return isValidBST(root->left);
    } 
    else if(root->left && root->right && root->val > root->left->val && root->val < root->right->val){
        if (isValidBST(root->left) && isValidBST(root->right) && highestval(root->left) < root->val &&  lowestval(root->right) > root->val){
            return true;
        }   
    }
    return false;
        
    }
    int highestval(TreeNode* root){
    TreeNode* current = root;
    while(current->right!=NULL){
        current = current->right;
    }
    return(current->val);
    }
    int lowestval(TreeNode* root){
    TreeNode* current = root;
    while(current->left!=NULL){
        current = current->left;
    }
    return(current->val);
    }
};