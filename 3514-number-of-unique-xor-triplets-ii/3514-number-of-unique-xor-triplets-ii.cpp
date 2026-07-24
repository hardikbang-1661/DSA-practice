class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> set;
        for(int j=0;j<nums.size();j++){
            for(int k=j;k<nums.size();k++){
                set.insert(nums[j]^nums[k]);
            }
        }
        unordered_set<int> ans;
        for(int p:set){
            for(int x:nums){
                ans.insert(p^x);
            }
        }
        return ans.size();
    }
};