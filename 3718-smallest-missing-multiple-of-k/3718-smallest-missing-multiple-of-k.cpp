class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int arr[101]={0};
        arr[0]=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k!=0){
                nums.erase(nums.begin()+i);
                i--;
            }
            else{
                arr[nums[i]/k]++;
            }
        }
        for(int i=0;i<101;i++){
            if(arr[i]==0) return k*i;
        }
        return 101;
    }
};