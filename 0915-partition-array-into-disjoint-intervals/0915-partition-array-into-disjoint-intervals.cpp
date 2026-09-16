class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        vector<int> pre;
        vector<int> suf;
        pre.push_back(nums[0]);
        suf.push_back(nums[nums.size()-1]);
        for(int i=1;i<nums.size();i++){
            pre.push_back(max(pre[i-1],nums[i]));
            suf.push_back(min(nums[nums.size()-i-1],suf[i-1]));
        }
        for(int i=1;i<pre.size();i++){
            if(pre[i-1]<=suf[nums.size()-i-1]) return i;
        }
        return -1;
    }
};