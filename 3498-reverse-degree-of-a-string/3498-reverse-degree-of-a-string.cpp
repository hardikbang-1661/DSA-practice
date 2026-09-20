class Solution {
public:
    int reverseDegree(string s) {
        long long count=0;
        for(int i=0;i<s.length();i++){
            count+=(26-(s[i]-'a'))*(i+1);
        }
        return count;
    }
};