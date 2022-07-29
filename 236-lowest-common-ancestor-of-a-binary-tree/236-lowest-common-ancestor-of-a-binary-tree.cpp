/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(isSubtree(root->left,p) && isSubtree(root->right,q)){
        return root;
    }
    if(isSubtree(root->left,p) && isSubtree(root->left,q)){
        return lowestCommonAncestor(root->left,p,q);
    }
    if(isSubtree(root->right,p) && isSubtree(root->right,q)){
        
        return lowestCommonAncestor(root->right,p,q);
    }
    if(root->val == p->val){
        
         if(isSubtree(root->right,q) || root->val == q->val ){
             return root;
         }
    }
    if(root->val == q->val){
         if(isSubtree(root->left,p) || root->val == p->val ){
             return root;
         }
    }
    return root;
        
    
    
    
        
    }
    bool isSubtree(TreeNode* root,TreeNode* p){
    if(root==NULL){
        return false; 
    }
    if(root->val==p->val){
        return true;
    }
    return isSubtree(root->left,p) || isSubtree(root->right,p);
    
    
    
    
    
    }
};