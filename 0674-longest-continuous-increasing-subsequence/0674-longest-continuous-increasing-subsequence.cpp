class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=0;
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]) count++;
            else{
                maxi=max(count,maxi);
                count=0;
            }
        }
        return max(maxi,count)+1;
    }
};