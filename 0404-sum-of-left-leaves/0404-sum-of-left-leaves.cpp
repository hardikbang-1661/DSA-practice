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
long long sum=0;
void pre(TreeNode* root){
    if(root==NULL) return;
    if(root->left){
        if(root->left->left==NULL && root->left->right==NULL){
            sum+=root->left->val;
        }
    }
    pre(root->left);
    pre(root->right);
}
    int sumOfLeftLeaves(TreeNode* root) {
        pre(root);
        return sum;
    }
};