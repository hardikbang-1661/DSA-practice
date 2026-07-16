class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefix;
        int largest=nums[0];
        for(int i=0;i<nums.size();i++){
            largest=max(largest,nums[i]);
            int temp=largest;
            int res=min(largest,nums[i]);
            while (temp != 0) {
            int remainder = res % temp;
            res = temp;
            temp = remainder;
        }
            prefix.push_back(res);
        }
        sort(prefix.begin(),prefix.end());
        long long sum=0;
        for(int i=0;i<prefix.size()/2;i++){
            long long m=prefix[i];
            long long n=prefix[prefix.size()-i-1];
            while (n != 0) {
            long long remainder = m % n;
            m = n;
            n = remainder;
        }
            sum+=m;
        }
        return sum;
    }
};