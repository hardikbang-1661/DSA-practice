class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> vec;
        if(num%3!=0) return vec;
        vec.push_back(num/3-1);
        vec.push_back(num/3);
        vec.push_back(num/3+1);
        return vec;
    }
};