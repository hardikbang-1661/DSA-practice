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
    vector<string> ans;
    string str;
    void dfs(TreeNode* root){
        if(root==NULL) return;
        str+=(root->val+'a');
        if(root->left==NULL && root->right==NULL){
            ans.push_back(str);
            str.pop_back();
            return;
        }
        dfs(root->left);
        dfs(root->right);
        str.pop_back();
    }
public:
    string smallestFromLeaf(TreeNode* root) {
        dfs(root);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].length()/2;j++){
                char temp=ans[i][j];
                ans[i][j]=ans[i][ans[i].length()-j-1];
                ans[i][ans[i].length()-j-1]=temp;
            }
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};