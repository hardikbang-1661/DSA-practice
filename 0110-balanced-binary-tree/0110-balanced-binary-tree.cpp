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
    int flag=0;
    int dfs(TreeNode* root){
        if(root==NULL) return 0;
        int left=dfs(root->left);
        int right=dfs(root->right);
        if(flag==-1 || abs(left-right)>1){
            flag=-1;
            return -1;
        }
        return max(left,right)+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        if(dfs(root)==-1) return false;
        return true;
    }
};