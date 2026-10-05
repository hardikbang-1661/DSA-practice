class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stk;
        stk.push(0);
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                stk.push(0);
            }
            else{
                int x=stk.top();
                stk.pop();
                int val;
                if(x==0) val=1;
                else val=2*x;
                stk.top()+=val;
            }
        }
        return stk.top();
    }
};
// took small help