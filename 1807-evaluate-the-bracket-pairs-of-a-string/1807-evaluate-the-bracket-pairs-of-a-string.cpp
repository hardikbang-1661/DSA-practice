class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string> mp;
        for(int i=0;i<knowledge.size();i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        string str;
        string t="";
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                t="";
                flag=1;
                continue;
            }
            else if(s[i]==')'){
                flag=0;
                auto it=mp.find(t);
                if(it!=mp.end()){
                    str+=it->second;
                    continue;
                }
                else{
                    str+='?';
                    continue;
                }
            }
            if(flag){
                t+=s[i];
            }
            else{
                str+=s[i];
            }
        }
        return str;
    }
};