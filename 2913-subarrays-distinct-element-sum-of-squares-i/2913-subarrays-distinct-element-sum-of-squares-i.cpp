class Solution {
public:
    int sumCounts(vector<int>& nums) {
        map<int,int> mp;
        long long sum=0;
        for(int i=0;i<nums.size()-1;i++){
            mp[nums[i]]++;
            for(int j=i+1;j<nums.size();j++){
                mp[nums[j]]++;
                sum+=mp.size()*mp.size();
            }
            mp.clear();
        }
        sum+=nums.size();
        return sum;
    }
};