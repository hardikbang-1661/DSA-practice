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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return vec;
        bfs(root);
        for(int i=1;i<vec.size();i+=2){
            for(int j=0;j<vec[i].size()/2;j++){
                swap(vec[i][j],vec[i][vec[i].size()-j-1]);
            }
        }
        return vec;
    }
};