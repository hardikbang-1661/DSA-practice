class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=nums.size()-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(abs(nums[mid]-nums[i])==k){
                    count++;
                    break;
                }
                else if(abs(nums[i]-nums[mid])>k){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
        }
        return count;
    }
};