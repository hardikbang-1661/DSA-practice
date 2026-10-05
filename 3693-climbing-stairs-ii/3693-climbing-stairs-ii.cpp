class Solution {
public:
    int climbStairs(int n, vector<int>& c) {
        if(n==1) return c[0]+1;
        else if(n==2) return min(c[1]+4,c[0]+c[1]+2);
        else if(n==3) return min(c[2]+9,min(c[0]+c[1]+c[2]+3,min(c[0]+c[2]+5,c[1]+c[2]+5)));
        vector<int> vec(n);
        vec[0]=c[0]+1;
        vec[1]=min(c[1]+4,c[0]+c[1]+2);
        vec[2]=min(c[2]+9,min(c[0]+c[1]+c[2]+3,min(c[0]+c[2]+5,c[1]+c[2]+5)));
        for(int i=3;i<c.size();i++){
            vec[i]=min(vec[i-3]+c[i]+9,min(vec[i-2]+c[i]+4,vec[i-1]+c[i]+1));
        }
        return vec[n-1];
    }
};