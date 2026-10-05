class Solution {
public:
    bool isValid(string s) {
        if(s.length()%3!=0) return false;
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a') stk.push('a');
            else if(s[i]=='b') stk.push('b');
            else{
                if(stk.empty()) return false;
                if(stk.top()!='b') return false;
                else{
                    stk.pop();
                    if(stk.empty()) return false;
                    if(stk.top()!='a') return false;
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};