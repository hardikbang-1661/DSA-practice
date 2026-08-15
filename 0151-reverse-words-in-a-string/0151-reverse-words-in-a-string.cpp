class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && str!=""){
                vec.push_back(str);
                str="";
            }
            else if(s[i]!=' ') str+=s[i];
        }
        if(str!="") vec.push_back(str);
        string ans;
        for(int i=vec.size()- 1;i>=0;i--) {
            ans+=vec[i];
            if(i!=0)
                ans+=' ';
        }
        return ans;
    }
};