class Solution {
public:
bool check(vector<int> vec){
    int maxidx=0;
    for(int i=0;i<vec.size();i++){
        if(i>maxidx) return false;
        maxidx=max(maxidx,i+vec[i]);
    }
    return true;
}
    bool canJump(vector<int>& nums) {
        return check(nums);
    }
};