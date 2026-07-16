class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        int top=0;
        int bottom=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        while(top<=bottom && left<=right){
            for(int col=left;col<=right;col++){
                vec.push_back(matrix[top][col]);
            }
            top++;
            for(int row=top;row<=bottom;row++){
                vec.push_back(matrix[row][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    vec.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    vec.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return vec;
    }
};