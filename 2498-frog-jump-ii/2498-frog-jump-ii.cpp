class Solution {
public:
    int maxJump(vector<int>& nums) {
        if(nums.size()==2) return nums[1]-nums[0];
        int maxi=INT_MIN;
        for(int i=0;i<nums.size()-2;i++){
            maxi=max(maxi,nums[i+2]-nums[i]);
        }
        return maxi;
    }
};