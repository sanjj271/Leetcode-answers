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
    vector<vector<int>> levelOrder(TreeNode* root) {
    queue<TreeNode*>q;
    q.push(root);
    vector<vector<int>>ans;
    //TreeNode* l;
    if(!root){
        return ans;
    }
    while(!q.empty()){
        int a = q.size();
        vector<int>res;
        for(int i =0;i<a;i++){
        TreeNode* l =q.front();
        q.pop();
        res.push_back(l->val);
        if(l->left){
            q.push(l->left);
        }
        if(l->right){
            q.push(l->right);
        }
        }
        
        ans.push_back(res);
        
        
    }
    return ans;
        
    }
};