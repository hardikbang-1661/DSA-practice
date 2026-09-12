class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& ast) {
        sort(ast.begin(),ast.end());
        long long sum=0;
        sum+=m;
        if(sum<ast[0]) return false;
        sum+=ast[0];
        for(int i=1;i<ast.size();i++){
            if(sum>=ast[i]){
                sum+=ast[i];
            }
            else return false;
        }
        return true;
    }
};