class Solution {
public:
    int totalFruit(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int maxi=1;
        int count=1;
        int one=nums[0];
        int two=nums[1];
        int same=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==one || nums[i]==two) count++;
            else{
                one=nums[i-1];
                two=nums[i];
                count=same+1;
            }
            if(nums[i]==nums[i-1]) same++;
            else same=1;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};