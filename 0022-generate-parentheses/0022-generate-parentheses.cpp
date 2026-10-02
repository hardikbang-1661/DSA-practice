class Solution {
public:
vector<string> ans;
void backtrack(string str,int left,int right,int n){
    if(str.size()==2*n){
        ans.push_back(str);
        return;
    }
    if(left<n){
        str.push_back('(');
        backtrack(str,left+1,right,n);
        str.pop_back();
    }
    if(right<left){
        str+=')';
        backtrack(str,left,right+1,n);
        str.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        string str="";
        backtrack(str,0,0,n);
        return ans;
    }
};


/*
()()
(())
*/