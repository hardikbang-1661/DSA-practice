class Solution {
int bfs(vector<vector<int>> g,vector<vector<bool>> & vis,int r,int c){
    int count=0;
    int n=g.size();
    int m=g[0].size();
    queue<pair<int,int>> q;
    q.push({r,c});
    vis[r][c]=true;
    while(!q.empty()){
        int nrow=q.front().first;
        int ncol=q.front().second;
        q.pop();
        count++;
        if(nrow+1>=0 && nrow+1<n && vis[nrow+1][ncol]==false && g[nrow+1][ncol]==1){
            vis[nrow+1][ncol]=true;
            q.push({nrow+1,ncol});
        }
        if(nrow-1>=0 && nrow-1<n && vis[nrow-1][ncol]==false && g[nrow-1][ncol]==1){
            vis[nrow-1][ncol]=true;
            q.push({nrow-1,ncol});
        }
        if(ncol+1>=0 && ncol+1<m && vis[nrow][ncol+1]==false && g[nrow][ncol+1]==1){
            vis[nrow][ncol+1]=true;
            q.push({nrow,ncol+1});
        }
        if(ncol-1>=0 && ncol-1<m && vis[nrow][ncol-1]==false && g[nrow][ncol-1]==1){
            vis[nrow][ncol-1]=true;
            q.push({nrow,ncol-1});
        }
    }
    return count;
}
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        vector<vector<bool>> vis(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(vis[i][j]==false && grid[i][j]==1){
                    int temp=bfs(grid,vis,i,j);
                    maxi=max(maxi,temp);
                }
            }
        }
        return maxi;
    }
};