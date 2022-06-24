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
    int count=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
         add(root,low,high);
         return count;
    
        
    }
     void add(TreeNode* root, int low, int high){
        if(root==NULL){
            return;
        }
        if(root->val >=low && root->val <=high){
            count = count+root->val;
        }
        add(root->left,low,high);
        add(root->right,low,high);
    }
    
};