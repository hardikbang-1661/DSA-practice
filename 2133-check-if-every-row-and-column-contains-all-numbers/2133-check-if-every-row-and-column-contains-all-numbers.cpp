class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            int arr[matrix.size()+1];
            for(int m=0;m<matrix.size()+1;m++){
                arr[m]=0;
            }
            arr[0]=1;
            for(int j=0;j<matrix[i].size();j++){
                arr[matrix[i][j]]++;
            }
            for(int k=0;k<matrix.size()+1;k++){
                if(arr[k]!=1) return false;
            }
        }
        for(int i=0;i<matrix.size();i++){
            int arr[matrix.size()+1];
            for(int m=0;m<matrix.size()+1;m++){
                arr[m]=0;
            }
            arr[0]=1;
            for(int j=0;j<matrix[i].size();j++){
                arr[matrix[j][i]]++;
            }
            for(int k=0;k<matrix.size()+1;k++){
                if(arr[k]!=1) return false;
            }
        }
        return true;
    }
};