class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> prefmax;
        vector<int> suffmin;
        prefmax.push_back(nums[0]);
        suffmin.push_back(nums[nums.size()-1]); 
        int mini=INT_MAX;
        for(int i=1;i<nums.size();i++){
            prefmax.push_back(max(prefmax[i-1],nums[i]));
            suffmin.push_back(min(suffmin[i-1],nums[nums.size()-i-1]));
        }
        for(int i=0;i<nums.size();i++){
            if(prefmax[i]-suffmin[nums.size()-i-1]<=k) mini=min(mini,i);
        }
        if(mini==INT_MAX)
            return -1;
        return mini;
    }
};