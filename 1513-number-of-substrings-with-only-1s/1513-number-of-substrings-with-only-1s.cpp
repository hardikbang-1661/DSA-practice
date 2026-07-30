class Solution {
public:
    int numSub(string s) {
        const int MOD=1e9+7;
        long long curr=0;
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') curr++;
            else{
                sum=(sum+(curr*(curr+1))/2)%MOD;
                curr=0;
            }
        }
        if(curr!=0){
            sum=(sum+(curr*(curr+1))/2)%MOD;
        }
        return sum;
    }
};