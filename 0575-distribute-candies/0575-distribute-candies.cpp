class Solution {
public:
    int distributeCandies(vector<int>& ct) {
        sort(ct.begin(),ct.end());
        int count=1;
        for(int i=1;i<ct.size();i++){
            if(ct[i]!=ct[i-1]){
                count++;
            }
        }
        if(count>ct.size()/2) return ct.size()/2;
        return count;
    }
};