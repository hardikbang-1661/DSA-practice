class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        long long sum=0;
        sort(nums.begin(),nums.end());
        int idx=nums.size()-2;
        for(int i=0;i<nums.size()/3;i++){
            sum+=nums[idx];
            idx-=2;
        }
        return sum;
    }
};