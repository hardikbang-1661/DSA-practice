class Solution {
public:
    int monkeyMove(int n) {
        long long MOD=1e9+7;
        long long pro=1;
        long long base=2;
        while(n>0){
            if(n%2){
                pro=pro*base%MOD;
            }
            base=base*base%MOD;
            n>>=1;
        }
        return (pro-2+MOD)%MOD;
    }
};

// we are here checkign whether it is divisible by 2 or not