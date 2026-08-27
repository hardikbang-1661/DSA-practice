class Solution {
public:
vector<vector<int>> ans;
void combsum(vector<int> c, vector<int>& output,int t,int idx){
    if(idx>=c.size()){
        if(t==0){
            ans.push_back(output);
        }
        return;
    }
    if(t>=c[idx]){
        output.push_back(c[idx]);
        combsum(c,output,t-c[idx],idx);
        output.pop_back();
    }
    combsum(c,output,t,idx+1);
}
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<int> output;
        combsum(c,output,t,0);
        return ans;
    }
};