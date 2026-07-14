class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                s.insert(nums[i]);
            }
        }
        int count=1;
        while(s.find(count)!=s.end()){
            count++;
        }
        return count;
    }
};