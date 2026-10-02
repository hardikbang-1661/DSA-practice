class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int bal=0;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') bal++;
            else if(s[i]==')') bal--;
            if(bal<0) bal=0;
            else{
                ans+=s[i];
            }
        }
        bal=0;
        string fans="";
        for(int i=ans.length()-1;i>=0;i--){
            if(ans[i]==')') bal++;
            else if(ans[i]=='(') bal--;
            if(bal<0) bal=0;
            else{
                fans+=ans[i];
            }
        }
        reverse(fans.begin(),fans.end());
        return fans;
    }
};