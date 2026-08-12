class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        long long pro=1;
        int left=0;
        int maxi=0;
        for(int right=0;right<nums.size();right++){
            pro*=nums[right];
            while(pro>=k){
                pro/=nums[left];
                left++;
            }
            maxi+=right-left+1;
        }
        return maxi;
    }
};