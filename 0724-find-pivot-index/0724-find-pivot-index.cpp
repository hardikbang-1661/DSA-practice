class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> l;
        vector<int> r;
        l.push_back(nums[0]);
        r.push_back(nums[nums.size()-1]);
        for(int i=1;i<nums.size();i++){
            l.push_back(l[i-1]+nums[i]);
            r.push_back(r[i-1]+nums[nums.size()-i-1]);
        }
        for(int i=0;i<l.size();i++){
            if(l[i]==r[r.size()-i-1]) return i;
        }
        return -1;
    }
};

// 1,8,11,17,22,28