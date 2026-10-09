class Solution {
public:
    int minInsertions(string s) {
        int counter=0;
        stack<int> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(!stk.empty() && stk.top()==1){
                    counter++;
                    stk.pop();
                    stk.push(2);
                }
                else{
                    stk.push(2);
                }
            }
            else{
                if(stk.empty()){
                    stk.push(1);
                    counter++;
                }
                else{
                    if(stk.empty()){
                        stk.push(1);
                        counter++;
                    }
                    else{
                        int x=stk.top();
                        x--;
                        stk.pop();
                        if(x!=0) stk.push(x);
                    }
                }
            }
        }
        while(!stk.empty()){
            counter+=stk.top();
            stk.pop();
        }
        return counter;
    }
};