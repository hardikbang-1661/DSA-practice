class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int idxs=0;
        int idxl=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<nums[idxl]) idxl=i;
            if(nums[i]>nums[idxs]) idxs=i;
        }
        int n=nums.size();
        int left=min(idxl,idxs);
        int right=max(idxl,idxs);
        return min(right+1,min(n-left,left+1+n-right));
    }
};