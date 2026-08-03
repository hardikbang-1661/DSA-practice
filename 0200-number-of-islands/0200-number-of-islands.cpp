class Solution {
private:
void bfs(int r,int c,vector<vector<bool>>& vis,vector<vector<char>>& g){
    queue<pair<int,int>> q;
    int n=g.size();
    int m=g[0].size();
    int check=g[r][c];
    q.push({r,c});
    vis[r][c]=true;
    while(!q.empty()){
        int nrow=q.front().first;
        int ncol=q.front().second;
        q.pop();
        if(nrow+1>=0 && nrow+1<n){
            if(g[nrow+1][ncol]==check && !vis[nrow+1][ncol]){
                vis[nrow+1][ncol]=true;
                q.push({nrow+1,ncol});
            }
        }
        if(nrow-1>=0 && nrow-1<n){
            if(g[nrow-1][ncol]==check && !vis[nrow-1][ncol]){
                vis[nrow-1][ncol]=true;
                q.push({nrow-1,ncol});
            }
        }
        if(ncol+1>=0 && ncol+1<m){
            if(g[nrow][ncol+1]==check && !vis[nrow][ncol+1]){
                vis[nrow][ncol+1]=true;
                q.push({nrow,ncol+1});
            }
        }
        if(ncol-1>=0 && ncol-1<m){
            if(g[nrow][ncol-1]==check && !vis[nrow][ncol-1]){
                vis[nrow][ncol-1]=true;
                q.push({nrow,ncol-1});
            }
        }
    }
}
public:
    int numIslands(vector<vector<char>>& g) {
        vector<vector<bool>> vec(g.size(),vector<bool> (g[0].size(),false));
        int count=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(vec[i][j]==false && g[i][j]=='1'){
                    count++;
                    bfs(i,j,vec,g);
                }
            }
        }
        return count;
    }
};