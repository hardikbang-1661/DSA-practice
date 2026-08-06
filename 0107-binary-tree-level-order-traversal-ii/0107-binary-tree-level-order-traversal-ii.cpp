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
vector<vector<int>> vec;
void bfs(TreeNode* root){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> output;
        int temp=q.size();
        for(int i=0;i<temp;i++){
            output.push_back(q.front()->val);
            if(q.front()->left!=NULL) q.push(q.front()->left);
            if(q.front()->right!=NULL) q.push(q.front()->right);
            q.pop();
        }
        vec.push_back(output);
    }
}
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==NULL) return vec;
        bfs(root);
        reverse(vec.begin(),vec.end());
        return vec;
    }
};