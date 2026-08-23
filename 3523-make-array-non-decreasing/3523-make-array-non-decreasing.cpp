class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> stk;
        for(int i=0;i<nums.size();i++){
            if(stk.empty() || nums[i]>=nums[stk.top()]){
                stk.push(i);
            }
        }
        return (int)stk.size();
    }
};