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
     map<int,int>mp;
    static bool sortbyval(const pair<int, int> &a, 
               const pair<int, int> &b){
        return(b.second<a.second);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
     inorder(root);
      vector<int>ans;
      vector<pair<int, int> > v1;
      for(auto j : mp){
          v1.push_back(j);
      }
      sort(v1.begin(),v1.end(),sortbyval);
      int max = v1[0].second;
     for(auto j : mp){
         cout<<j.first<<" "<<j.second<<endl;
     }
      for(auto m : v1){
          if(m.second == max){
              ans.push_back(m.first);
          }
      }
     return ans;
      
      
    
        
        
    }
    int subtreeSum(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return subtreeSum(root->left) + subtreeSum(root->right) + root->val;
        
        
    }
    void inorder(TreeNode* root){
        if(!root){
            return;
        }
        inorder(root->left);
        mp[subtreeSum(root)]++;
        inorder(root->right);
        
    }
    
};