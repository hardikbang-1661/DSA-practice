class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> stk;
        vector<int> vec;
        for(int i=0;i<ast.size();i++){
            if(stk.empty()) stk.push(ast[i]);
            else{
                if((stk.top()*ast[i]>0) || (stk.top()<0 && ast[i]>0)) stk.push(ast[i]);
                else{
                    while(!stk.empty() && stk.top()>0 && abs(stk.top())<abs(ast[i])){
                        stk.pop();
                    }
                    if(stk.empty()) stk.push(ast[i]);
                    else if(abs(stk.top())==abs(ast[i]) && stk.top()*ast[i]<0) stk.pop();
                    else if(stk.top()<0) stk.push(ast[i]);
                }
            }
        }
        while(!stk.empty()){
            vec.push_back(stk.top());
            stk.pop();
        }
        for(int i=0;i<vec.size()/2;i++){
            swap(vec[i],vec[vec.size()-i-1]);
        }
        return vec;
    }
};