class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> vec1;
        vector<int> vec2;
        vec1.push_back(nums[0]);
        vec2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(vec1[vec1.size()-1]>vec2[vec2.size()-1]) vec1.push_back(nums[i]);
            else vec2.push_back(nums[i]);
        }
        for(int i=0;i<vec2.size();i++){
            vec1.push_back(vec2[i]);
        }
        return vec1;
    }
};