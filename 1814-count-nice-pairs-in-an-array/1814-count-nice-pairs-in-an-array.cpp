class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        const int MOD=1e9+7;
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            int sum=0;
            while(temp>0){
                sum=sum*10+temp%10;
                temp/=10;
            }
            vec.push_back(sum);
        }
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]-vec[i]]++;
        }
        long long count=0;
        for(auto x:mp){
            count=(count+(1LL*x.second*(x.second-1))/2)%MOD;
        }
        return count;
    }
};

// 31 1 53 42 67