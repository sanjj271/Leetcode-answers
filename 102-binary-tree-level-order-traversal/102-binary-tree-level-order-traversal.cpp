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
    vector<vector<int>> levelOrder(TreeNode* root) 
	{
		if(root ==NULL)
			return {};

    queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        while(!q.empty()){
         vector<int> res1;
          int n =q.size();
        
        for(int i=1;i<=n;i++){
            TreeNode* j=q.front();
            q.pop();
            res1.push_back(j->val);
            if(j->left != NULL){
                q.push(j->left);
            }
             if(j->right != NULL){
                q.push(j->right);    
            }
               
        }
        res.push_back(res1);
    }
        return res;
}
};
    