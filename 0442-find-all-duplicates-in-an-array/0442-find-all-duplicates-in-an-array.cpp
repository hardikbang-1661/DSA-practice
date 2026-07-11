class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> vec(nums.size()+1);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            vec[nums[i]]++;
        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]>1) ans.push_back(i);
        }
        return ans;
    }
};