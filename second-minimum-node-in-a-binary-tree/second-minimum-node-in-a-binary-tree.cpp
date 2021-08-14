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
    vector<int> v;
 
public:
    int findSecondMinimumValue(TreeNode* root) {
        traversal(root);
        sort(v.begin(), v.end());
         v.erase(unique(v.begin(), v.end()), v.end());
         if(v.size()==1){
            return -1;
        }
        else{
            return v[1];
        }
        
        
        
        
    }
    void traversal(TreeNode* root){
        if(root == NULL) {
            return;
        }
        traversal(root->left);
        v.push_back(root->val);
        traversal(root->right);
        
    }
};