class Solution {
public:
    char findTheDifference(string s, string t) {
        char x=0;
        for(int i=0;i<s.length();i++){
            x^=((s[i])^(t[i]));
        }
        x^=(t[t.length()-1]);
        return x;
    }
};