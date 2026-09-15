class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long mid;
        if(nums.size()%2==0) mid=nums[nums.size()-nums.size()/2-1]+(nums[nums.size()-nums.size()/2]-nums[nums.size()/2])/2;
        else mid=nums[nums.size()/2];
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=abs(nums[i]-mid);
        }
        return sum;
    }
};