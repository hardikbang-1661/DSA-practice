class Solution {
public:
    int maxProduct(vector<int>& nums) {
        for(auto& x:nums){
            x-=1;
        }
        sort(nums.begin(),nums.end());
        return nums[nums.size()-1]*nums[nums.size()-2];
    }
};