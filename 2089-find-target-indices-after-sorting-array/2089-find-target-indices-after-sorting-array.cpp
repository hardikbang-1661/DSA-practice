class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int countl=0;
        int counte=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target) counte++;
            if(nums[i]<target) countl++;
        }
        vector<int> vec;
        for(int i=countl;i<countl+counte;i++){
            vec.push_back(i);
        }
        return vec;
    }
};