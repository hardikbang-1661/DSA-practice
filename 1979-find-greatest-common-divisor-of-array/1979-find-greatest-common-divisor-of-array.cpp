class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        if(mini==maxi) return maxi;
        int count=mini;
        for(int i=mini;i>=1;i--){
            if(maxi%i==0 && mini%i==0) return i;
        }
        return 1;
    }
};