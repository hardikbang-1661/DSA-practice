class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length()==1) return s;
        string t;
        string str;
        for(int i=0;i<s.length()/2;i++){
            t+=s[i];
        }
        sort(t.begin(),t.end());
        for(int i=0;i<t.length();i++){
            str+=t[i];
        }
        if(s.length()%2!=0) str+=s[s.length()/2];
        for(int i=t.length()-1;i>=0;i--){
            str+=t[i];
        }
        return str;
    }
};