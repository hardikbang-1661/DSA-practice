class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        vector<int> pref;
        vector<int> suff;
        pref.push_back(nums[0]);
        suff.push_back(nums[nums.size()-1]);
        for(int i=1;i<nums.size();i++){
            pref.push_back(pref[i-1]+nums[i]);
            suff.push_back(suff[i-1]+nums[nums.size()-i-1]);
        }
        map<int,int> mp;
        for(int i=0;i<suff.size();i++){
            mp[suff[i]]=i;
        }
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(pref[i]==x){
                ans=i+1;
                break;
            }
            else if(pref[i]>x) break;
        }
        for(int i=0;i<nums.size();i++){
            if(suff[i]==x){
                ans=min(ans,i+1);
                break;
            }
            else if(suff[i]>x) break;
        }
        for(int i=0;i<pref.size();i++){
            auto it=mp.find(x-pref[i]);
            if(it!=mp.end() && i+it->second+1<suff.size()){
                ans=min(ans,i+it->second+2);
            }
        }
        if(ans!=INT_MAX) return ans;
        return -1;
    }
};