class Solution {
public:
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<long long,long long>> s;
        for(int i=0;i<circles.size();i++){
            long long cx=circles[i][0];
            long long cy=circles[i][1];
            long long r=circles[i][2];
            for(long long x=cx-r;x<=cx+r;x++){
                for(long long y=cy-r;y<=cy+r;y++){
                    if((x-cx)*(x-cx)+(y-cy)*(y-cy)<=r*r){
                        s.insert({x,y});
                    }
                }
            }
        }
        return s.size();
    }
};