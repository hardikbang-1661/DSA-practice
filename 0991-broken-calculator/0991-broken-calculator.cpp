class Solution {
public:
    int brokenCalc(int startValue, int target) {
        int count=0;
        while(target>startValue){
            count++;
            if(target%2==0) target/=2;
            else{
                count++;
                target++;
                target/=2;
            }
        }
        while(target!=startValue){
            count++;
            target++;
        }
        return count;
    }
};