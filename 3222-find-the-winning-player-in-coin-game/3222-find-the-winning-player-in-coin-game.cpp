class Solution {
public:
    string winningPlayer(int x, int y) {
        int count=x;
        int count1=y/4;
        if((min(count,count1))%2!=0){
            return "Alice";
        }
        return "Bob";
    }
};