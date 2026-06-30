class Solution {
    void subset(int idx,vector<vector<int>>& ans,vector<int> output, vector<int>& nums){
        if(idx==nums.size()){
            ans.push_back(output);
            return;
        }
        output.push_back(nums[idx]);
        subset(idx+1,ans,output,nums);
        output.pop_back();
        subset(idx+1,ans,output,nums);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> ans;
        int idx=0;
        subset(idx,vec,ans,nums);
        return vec;
    }
};