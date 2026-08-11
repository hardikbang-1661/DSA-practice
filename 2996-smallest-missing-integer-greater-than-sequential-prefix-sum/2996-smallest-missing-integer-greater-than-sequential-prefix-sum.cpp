class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> s;
        int count=nums[0];
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1) count+=nums[i];
            else break;
        }
        int check=0;
        while(true){
            if(s.find(count)==s.end())
                return count;
            else count++;
        }
        return count;
    }
};