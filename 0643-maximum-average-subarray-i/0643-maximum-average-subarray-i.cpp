class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(i>=k){
                sum-=nums[i-k];
            }
            if(i>=k-1){
                maxi=max(sum,maxi);
            }
        }
        return (double)maxi/k;
    }
};