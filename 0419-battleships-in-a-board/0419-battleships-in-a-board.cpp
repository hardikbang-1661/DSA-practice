class Solution {
public:
    int countBattleships(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                int curr=0;
                if(grid[i][j]=='X'){
                    curr++;
                    grid[i][j]='.';
                    // rows
                    int row=i+1;
                    int col=j+1;
                    while(row<grid.size() && grid[row][j]=='X'){
                        grid[row][j]='.';
                        row++;
                    }
                    while(col<grid[0].size() && grid[i][col]=='X'){
                        grid[i][col]='.';
                        col++;
                    }
                    count++;
                }
            }
        }
        return count;
    }
};