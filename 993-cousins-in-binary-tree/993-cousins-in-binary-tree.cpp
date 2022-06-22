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
    int t_parent;
    int depth(TreeNode* root, int x){
        if(root==NULL)
            return INT_MAX;
        if(root->val==x)
            return 0;
        int left = depth(root->left,x);
        if(left!=INT_MAX)
        {
            if(left==0)
                t_parent = root->val;
            return 1+left;
        }
        int right = depth(root->right,x);
        if(right!=INT_MAX)
        {
            if(right==0)
                t_parent = root->val;
            return 1+right;
        }
        return INT_MAX;
    }

    
public:
    bool isCousins(TreeNode* root, int x, int y) {
        t_parent = 0;
        int x_depth = depth(root,x);
        int x_parent = t_parent;

        t_parent = 0;
        int y_depth = depth(root,y);
        int y_parent = t_parent;

        return x_parent!=y_parent && x_depth==y_depth;
    }
};