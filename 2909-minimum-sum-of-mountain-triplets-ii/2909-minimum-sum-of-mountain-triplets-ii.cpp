class Solution {
public:
    int minimumSum(vector<int>& nums) {
        vector<int> prefmin;
        vector<int> suffmin;
        int mini=INT_MAX;
        prefmin.push_back(nums[0]);
        suffmin.push_back(nums[nums.size()-1]);
        for(int i=1;i<nums.size();i++){
            prefmin.push_back(min(prefmin[i-1],nums[i]));
            suffmin.push_back(min(suffmin[i-1],nums[nums.size()-i-1]));
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>prefmin[i-1] && nums[i]>suffmin[suffmin.size()-i-2])
                mini=min(mini,nums[i]+prefmin[i-1]+suffmin[suffmin.size()-i-2]);
        }
        if(mini==INT_MAX) return -1;
        return mini;
    }
};
 
// 8 6 1 5 3 
// 8 6 1 1 1 
// 3 3 1 1 1 
// 1 1 1 3 3

// 5 4 8 7 10 2
// 5 4 4 4 4 2
// 2 2 2 2 2 2 