class Solution {
public:
    void dfs(int i,vector<vector<int>> vec,vector<bool> & visited){
        visited[i]=true;
        for(int j=0;j<vec.size();j++){
            if(vec[i][j]==1 && !visited[j]){
                dfs(j,vec,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& c) {
        vector<bool> visited(c.size(),false);
        int count=0;
        for(int i=0;i<c.size();i++){
            if(!visited[i]){
                dfs(i,c,visited);
                count++;
            }
        }
        return count;
    }
};