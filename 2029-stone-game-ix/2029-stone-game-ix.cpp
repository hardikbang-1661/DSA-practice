class Solution {
public:
    bool stoneGameIX(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int count0=0;
        for(int i=0;i<nums.size();i++){
            nums[i]%=3;
            if(nums[i]==1) count1++;
            else if(nums[i]==2) count2++;
            else count0++;
        }
        if(count0%2==0){
            return count1>0 && count2>0;
        }
        return abs(count1-count2)>2;
    }
};