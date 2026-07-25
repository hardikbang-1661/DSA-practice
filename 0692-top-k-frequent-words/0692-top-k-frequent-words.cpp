class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        for(auto x:words){
            mp[x]++;
        }
        auto cmp=[](const pair<string,int>& a, const pair<string,int>& b){
            if(a.second!=b.second) return a.second<b.second;
            return a.first>b.first;
        };
        priority_queue<pair<string,int>,vector<pair<string,int>>,decltype(cmp)> pq(cmp);
        for(auto& x:mp){
            pq.push(x);
        }
        vector<string> ans;
        while(k--){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};