class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vec;
        if(intervals.size()==0) return vec;
        sort(intervals.begin(),intervals.end());
        vec.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=vec.back()[1]){
                vec.back()[1]=max(vec.back()[1],intervals[i][1]);
            }
            else{
                vec.push_back(intervals[i]);
            }
        }
        return vec;
    }
};