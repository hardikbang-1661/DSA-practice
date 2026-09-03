class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int count=0,p1=0,t1=0;
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        while(p1<p.size() && t1<t.size()){
            if(p[p1]<=t[t1]){
                count++;
                t1++;
                p1++;
            }
            else t1++;
        }
        return count;
    }
};