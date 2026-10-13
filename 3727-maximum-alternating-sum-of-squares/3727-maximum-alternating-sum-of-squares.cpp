class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](const int& a,const int& b){
            return abs(a)<abs(b);
        });
        int n=nums.size();
        long long sum=0;
        for(int i=n-1;i>=n/2;i--){
            sum+=nums[i]*nums[i];
        }
        for(int i=n/2-1;i>=0;i--){
            sum-=(nums[i]*nums[i]);
        }
        return sum;
    }
};