class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int sum=0;
        vector<int> ans;
        for(int i=0;i<seq.length();i++){
            if(seq[i]=='('){
                ans.push_back(sum%2);
                sum++;
            }
            else{
                sum--;
                ans.push_back(sum%2);
            }
        }
        return ans;
    }
};