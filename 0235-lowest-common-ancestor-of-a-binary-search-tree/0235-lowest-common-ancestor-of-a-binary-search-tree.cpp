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
    TreeNode* dfs(TreeNode* root,TreeNode* p,TreeNode*q){
        if(root==NULL) return NULL;
        if((root->val>=p->val && root->val<=q->val) ||(root->val<=p->val && root->val>=q->val)) return root;
        if(root->val>p->val && root->val>q->val){
            return dfs(root->left,p,q);
        }
        return dfs(root->right,p,q);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root->val==p->val || root->val==q->val) return root;
        if((root->val>p->val && root->val<q->val) ||(root->val<p->val && root->val>q->val)) return root;
        return dfs(root,p,q);
    }
};