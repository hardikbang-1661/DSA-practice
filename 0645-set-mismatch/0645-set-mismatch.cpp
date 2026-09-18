class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> vec;
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                ans=nums[i];
                break;
            }
        }
        vec.push_back(ans);
        int actual=0;
        int real=0;
        for(int i=0;i<nums.size();i++){
            actual^=i;
            real^=nums[i];
        }
        actual^=nums.size();
        vec.push_back(actual^real^vec[0]);
        return vec;
    }
};