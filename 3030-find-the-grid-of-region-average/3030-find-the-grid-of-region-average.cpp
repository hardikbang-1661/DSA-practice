class Solution {
public:
    vector<vector<int>> resultGrid(vector<vector<int>>& image, int threshold) {
        vector<vector<int>> vec(image.size(),vector<int>(image[0].size(),0));
        vector<vector<int>> count(image.size(),vector<int>(image[0].size(),0));
        for(int i=0;i<=image.size()-3;i++){
            int sum=0;
            for(int j=0;j<=image[0].size()-3;j++){
                if(abs(image[i][j]-image[i][j+1])<=threshold
                && abs(image[i][j+1]-image[i][j+2])<=threshold
                && abs(image[i][j]-image[i+1][j])<=threshold
                && abs(image[i+1][j]-image[i+2][j])<=threshold
                && abs(image[i+1][j]-image[i+1][j+1])<=threshold
                && abs(image[i+1][j+1]-image[i+1][j+2])<=threshold
                && abs(image[i+2][j]-image[i+2][j+1])<=threshold
                && abs(image[i+2][j+1]-image[i+2][j+2])<=threshold
                && abs(image[i][j+1]-image[i+1][j+1])<=threshold
                && abs(image[i+1][j+1]-image[i+2][j+1])<=threshold
                && abs(image[i][j+2]-image[i+1][j+2])<=threshold
                && abs(image[i+1][j+2]-image[i+2][j+2])<=threshold){
                    int sum=(image[i][j]+image[i][j+1]+image[i][j+2]+image[i+1][j]+image[i+2][j]+image[i+1][j+1]+image[i+1][j+2]+image[i+2][j+1]+image[i+2][j+2])/9;
                    vec[i][j]+=sum;
                    vec[i+1][j]+=sum;
                    vec[i+2][j]+=sum;
                    vec[i][j+1]+=sum;
                    vec[i][j+2]+=sum;
                    vec[i+1][j+1]+=sum;
                    vec[i+2][j+1]+=sum;
                    vec[i+2][j+2]+=sum;
                    vec[i+1][j+2]+=sum;
                    count[i][j]++;
                    count[i+1][j]++;
                    count[i+2][j]++;
                    count[i][j+1]++;
                    count[i][j+2]++;
                    count[i+1][j+1]++;
                    count[i+2][j+1]++;
                    count[i+2][j+2]++;
                    count[i+1][j+2]++;
                }
            }
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[0].size();j++){
                if(count[i][j]!=0) vec[i][j]/=count[i][j];
                else vec[i][j]=image[i][j];
            }
        }
        return vec;
    }
};