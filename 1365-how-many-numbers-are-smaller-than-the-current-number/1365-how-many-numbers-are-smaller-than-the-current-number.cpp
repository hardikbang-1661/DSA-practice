class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec(nums);
        vector<int> ans(nums.size());
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int t=vec[i];
            auto it_lower=lower_bound(nums.begin(), nums.end(), t);
            int lower_idx=it_lower-nums.begin();
            ans[i]=lower_idx;
        }
        return ans;
    }
};