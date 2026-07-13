class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxi=0;
        for(auto x: s){
            if(s.find(x-1)==s.end()){
                int l=1;
                while(s.find(x+1)!=s.end()){
                    x++;
                    l++;
                }
            maxi=max(maxi,l);
            }
        }
        return maxi;
    }
};