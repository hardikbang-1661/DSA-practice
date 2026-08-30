class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        if(n==2) return -1;
        vector<long long> vec;
        vec.push_back(1);
        for(int i=1;i<n;i++){
            vec.push_back(vec[i-1]+i+1);
        }
        for(int i=1;i<vec.size()-1;i++){
            if(vec[i-1]==vec[vec.size()-1]-vec[i]) return i+1;
        }
        return -1;
    }
};

// 21 36