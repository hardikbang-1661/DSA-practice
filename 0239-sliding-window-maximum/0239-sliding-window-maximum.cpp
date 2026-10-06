class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++){
            pq.push({nums[i],i});
        }
        vector<int> vec;
        vec.push_back(pq.top().first);
        for(int i=k;i<nums.size();i++){
            pq.push({nums[i],i});
            while(i-pq.top().second>=k) pq.pop();
            vec.push_back(pq.top().first);
        }
        return vec;
    }
};