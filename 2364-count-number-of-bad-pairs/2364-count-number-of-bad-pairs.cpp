class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        if(nums.size()==1) return 0;
        unordered_map<long long,long long> mp;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-i;
            mp[nums[i]]++;
        }
        long long pro;
        if(nums.size()%2==0){
            pro=(nums.size()/2)*(nums.size()-1);
        }
        else{
            pro=nums.size()*((nums.size()-1)/2);
        }
        long long count=0;
        for(auto it:mp){
            if(it.second>1){
                if(it.second%2==0){
                    count+=(it.second/2)*(it.second-1);
                }
                else{
                    count+=it.second*((it.second-1)/2);
                }
            }
        }
        return pro-count;
    }
};