class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        stack<char> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    count++;
                }
            }
            else{
                stk.push(s[i]);
            }
        }
        return count+stk.size();
    }
};