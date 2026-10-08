class Solution {
public:
    string removeOuterParentheses(string s) {
        int t=0;
        int count=0;
        vector<int> vec;
        string str;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') count++;
            else{
                count--;
                if(count==0){
                    vec.push_back(t);
                    vec.push_back(i);
                    t=i+1;
                }
            }
        }
        int j=0;
        for(int i=0;i<s.length();i++){
            if(vec[j]!=i){
                str+=s[i];
            }
            else j++;
        }
        return str;
    }
};