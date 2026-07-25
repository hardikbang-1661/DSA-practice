class Solution {
public:
    int maxProduct(int n) {
        vector<int>vec;
        while(n>0){
            vec.push_back(n%10);
            n/=10;
        }
        sort(vec.begin(),vec.end());
        return vec[vec.size()-1]*vec[vec.size()-2];
    }
};