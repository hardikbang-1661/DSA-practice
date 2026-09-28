class Solution {
public:
    int maxDepth(string s) {
        stack<char> stk;
        int maxi=INT_MIN;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') stk.push(s[i]);
            else if(s[i]==')'){
                maxi=max(maxi,(int)stk.size());
                stk.pop();
            }
        }
        if(maxi==INT_MIN) return 0;
        return maxi;
    }
};