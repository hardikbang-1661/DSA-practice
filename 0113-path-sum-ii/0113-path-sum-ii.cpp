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
    vector<vector<int>> ans;
    vector<int> vec;
    void dfs(TreeNode* root,int k){
        if(root==NULL) return;
        vec.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(k==root->val) ans.push_back(vec);
            vec.pop_back();
            return;
        }
        dfs(root->left,k-root->val);
        dfs(root->right,k-root->val);
        vec.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum);
        return ans;
    }
};