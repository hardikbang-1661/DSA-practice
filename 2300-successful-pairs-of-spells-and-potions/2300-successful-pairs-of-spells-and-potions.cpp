class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int l=0;
            int r=potions.size()-1;
            while(l<r){
                int mid=l+(r-l)/2;
                if(1LL*potions[mid]*spells[i]>=success) r=mid;
                else l=mid+1;
            }
            if(1LL*spells[i]*potions[l]>=success)
                ans.push_back(potions.size()-l);
            else
                ans.push_back(0);
        }
        return ans;
    }
};