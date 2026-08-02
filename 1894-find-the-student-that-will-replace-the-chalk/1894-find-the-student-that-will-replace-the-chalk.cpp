class Solution {
public:
    int chalkReplacer(vector<int>& ch, int k) {
        long long sum=0;
        for(int x:ch){
            sum+=x;
        }
        k%=sum;
        int idx=0;
        while(k>0){
            k-=ch[idx];
            if(k<0) return idx;
            idx++;
        }
        return idx;
    }
};