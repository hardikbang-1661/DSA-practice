class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count=0;
        int curr=0;
        for(int i=1;i<s.length();i++){
            if(s[i]-s[i-1]==1) curr++;
            else{
                count=max(count,curr);
                curr=0;
            }
        }
        count=max(count,curr);
        if(count) return count+1;
        return 1;
    }
};