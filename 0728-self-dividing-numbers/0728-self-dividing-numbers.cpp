class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i=left;i<=right;i++){
            string str=to_string(i);
            bool flag=1;
            for(int j=0;j<str.length();j++){
                if(str[j]-'0'==0){
                    flag=0;
                    break;
                }
                if(i%(str[j]-'0')!=0){
                    flag=0;
                    break;
                }
            }
            if(flag){
                vec.push_back(i);
            }
        }
        return vec;
    }
};