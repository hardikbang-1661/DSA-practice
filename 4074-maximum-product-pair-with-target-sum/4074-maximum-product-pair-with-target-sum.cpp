class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        map<int,int> mp;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(target%2==0 && target/2==nums[i]) continue;
            mp[nums[i]]=i;
        }
        vector<int> arr(2,-1);
        for(auto x:mp){
            auto it=mp.find(target-x.first);
            if(it!=mp.end()){
                if(maxi<it->first*x.first){
                    maxi=it->first*x.first;
                    if(it->first>x.first){
                        arr[0]=it->second;
                        arr[1]=x.second;
                    }
                    else{
                        arr[0]=x.second;
                        arr[1]=it->second;
                    }
                }
            }
        }
        return arr;
    }
};