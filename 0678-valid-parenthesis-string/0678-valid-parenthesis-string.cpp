class Solution {
public:
    bool checkValidString(string s) {
        stack<int> brace,star;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') brace.push(i);
            else if(s[i]=='*') star.push(i);
            else{
                if(!brace.empty())
                    brace.pop();
                else if(!star.empty())
                    star.pop();
                    else return false;
            }
        }
        while(!brace.empty() && !star.empty()){
            if(brace.top()>star.top()) return false;
            brace.pop();
            star.pop();
        }
        return brace.empty();
    }
};