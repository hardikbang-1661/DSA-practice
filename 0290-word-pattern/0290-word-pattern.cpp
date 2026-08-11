class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> vec;
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ') str+=s[i];
            else{
                if(!str.empty()){
                    vec.push_back(str);
                    str.clear();
                }
            }
        }
        if(!str.empty()){
            vec.push_back(str);
        }
        if(vec.size()!=pattern.length()) return false;
        unordered_map<char,string> mp;
        unordered_set<string> se;
        for(int i=0;i<pattern.length();i++){
            char c=pattern[i];
            string word=vec[i];
            if(mp.find(c)==mp.end()){
                if(se.find(word)!=se.end()) return false;
                mp[c]=word;
                se.insert(word);
            }
            else{
                if(mp[c]!=word) return false;
            }
        }
        return true;
    }
};