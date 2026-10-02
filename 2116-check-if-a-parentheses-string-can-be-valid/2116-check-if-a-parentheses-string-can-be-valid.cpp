class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.length()%2) return false;
        int bal=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || locked[i]=='0') bal++;
            else bal--;
            if(bal<0) return false;
        }
        bal=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==')' || locked[i]=='0') bal++;
            else bal--;
            if(bal<0) return false;
        }
        return true;
    }
};