class Solution {
int bfs(vector<vector<int>>& g){
    queue<pair<int,int>> q;
    int count=0;
    int n=g.size();
    int m=g[0].size();
    for(int i=0;i<g.size();i++){
        for(int j=0;j<g[i].size();j++){
            if(g[i][j]==2) q.push({i,j});
        }
    }
    while(!q.empty()){
        int temp=q.size();
        bool rotten=false;
        for(int i=0;i<temp;i++){
            int nrow=q.front().first;
            int ncol=q.front().second;
            q.pop();
            if(nrow+1>=0 && nrow+1<n && g[nrow+1][ncol]==1){
                g[nrow+1][ncol]=2;
                q.push({nrow+1,ncol});
                rotten=true;
            }
            if(nrow-1>=0 && nrow-1<n && g[nrow-1][ncol]==1){
                g[nrow-1][ncol]=2;
                q.push({nrow-1,ncol});
                rotten=true;
            }
            if(ncol+1>=0 && ncol+1<m && g[nrow][ncol+1]==1){
                g[nrow][ncol+1]=2;
                q.push({nrow,ncol+1});
                rotten=true;
            }
            if(ncol-1>=0 && ncol-1<m && g[nrow][ncol-1]==1){
                g[nrow][ncol-1]=2;
                q.push({nrow,ncol-1});
                rotten=true;
            }
        }
        if(rotten)
            count++;
    }
    return count;
}
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int count=bfs(grid);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return count;
    }
};