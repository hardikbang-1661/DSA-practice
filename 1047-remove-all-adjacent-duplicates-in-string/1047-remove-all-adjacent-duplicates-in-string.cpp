class Solution {
public:
    string removeDuplicates(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            if(str.empty()) str+=s[i];
            else{
                if(str[str.length()-1]==s[i]) str.pop_back();
                else str+=s[i];
            }
        }
        return str;
    }
};