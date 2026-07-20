class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k==0) return grid;
        vector<int> vec;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                vec.push_back(grid[i][j]);
            }
        }
        k=k%vec.size();
        if(k==0) return grid;
        int check=vec.size()-k;
        bool flag=true;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(flag){
                    grid[i][j]=vec[check];
                    check++;
                    if(check==vec.size()){
                        check=0;
                        flag=false;
                    }
                }
                else{
                    grid[i][j]=vec[check];
                    check++;
                }
            }
        }
        return grid;
    }
};