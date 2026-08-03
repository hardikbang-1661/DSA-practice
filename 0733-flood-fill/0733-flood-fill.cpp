class Solution {
    void bfs(vector<vector<int>> &img,int sr,int sc,int color,vector<vector<bool>> &vis){
        queue<pair<int,int>> q;
        int n=img.size();
        int m=img[0].size();
        int check=img[sr][sc];
        q.push({sr,sc});
        vis[sr][sc]=true;
        while(!q.empty()){
            int nrow=q.front().first;
            int ncol=q.front().second;
            q.pop();
            img[nrow][ncol]=color;
            if(nrow+1>=0 && nrow+1<n){
                if(img[nrow+1][ncol]==check && !vis[nrow+1][ncol]){
                    vis[nrow+1][ncol]=true;
                    q.push({nrow+1,ncol});
                }
            }
            if(nrow-1>=0 && nrow-1<n){
                if(img[nrow-1][ncol]==check && !vis[nrow-1][ncol]){
                    vis[nrow-1][ncol]=true;
                    q.push({nrow-1,ncol});
                }
            }
            if(ncol+1>=0 && ncol+1<m){
                if(img[nrow][ncol+1]==check && !vis[nrow][ncol+1]){
                    vis[nrow][ncol+1]=true;
                    q.push({nrow,ncol+1});
                }
            }
            if(ncol-1>=0 && ncol-1<m){
                if(img[nrow][ncol-1]==check && !vis[nrow][ncol-1]){
                    vis[nrow][ncol-1]=true;
                    q.push({nrow,ncol-1});
                }
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        vector<vector<bool>> vis(image.size(),vector<bool>(image[0].size(),false));
        bfs(image,sr,sc,color,vis);
        return image;
    }
};