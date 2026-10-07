class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k==0) return nums; 
        if(2*k+1>nums.size()){
            vector<int> vec(nums.size(),-1);
            return vec;
        }
        vector<int> vec(nums.size());
        int total=2*k+1;
        for(int i=0;i<k;i++){
            vec[i]=-1;
            vec[nums.size()-i-1]=-1;
        }
        long long sum=0;
        for(int i=0;i<2*k+1;i++){
            sum+=nums[i];
        }
        vec[k]=sum/total;
        for(int i=k+1;i<nums.size()-k;i++){
            sum-=nums[i-k-1];
            sum+=nums[i+k];
            vec[i]=sum/total;
        }
        return vec;
    }
};