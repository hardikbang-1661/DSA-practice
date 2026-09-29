class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi=INT_MIN;
        int second=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(maxi!=nums[i]) second=max(second,nums[i]);
        }
        if(maxi>=2*second){
            for(int i=0;i<nums.size();i++){
                if(maxi==nums[i]) return i;
            }
        }
        return -1;
    }
};